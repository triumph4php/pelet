/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <language/SymbolTableClass.h>
#include <windows/StringHelperClass.h>
#include <language/TokenClass.h>
#include<algorithm>

/*
 * Checks that a resource matches visiblity rules.  
 * @param resource the resource to check
 * @param isStaticCall if TRUE, then resource is visible if the resource is also static
 * @param isThisCall if TRUE, then resource is visible if the resource is private, protected, or public
 * @param isParentCall if TRUE, then resource is visible if the resource is protected, or public
 * @return bool true if resource is visible
 */
static bool IsResourceVisible(const mvceditor::ResourceClass& resource, bool isStaticCall, bool isThisCall, bool isParentCall) {
	bool passesStaticCheck = isStaticCall == resource.IsStatic;

	// $this => can access this resource's private, parent's protected/public, other public
	// parent => can access parent's protected/public
	// neither => can only access public
	bool passesVisibilityCheck = !resource.IsPrivate && !resource.IsProtected;
	if (!passesVisibilityCheck && isParentCall) {

		// this check assumes that the resource finder has traversed the inheritance chain
		// properly. then, by a process of elimination, if the resource class is not
		// the symbol then we only show protected/public resources
		passesVisibilityCheck = resource.IsProtected;
	}
	else if (!passesVisibilityCheck) {

		//not checking isThisCalled
		passesVisibilityCheck = isThisCall;
	}
	return passesStaticCheck && passesVisibilityCheck;
}

/**
 * @return bool TRUE if the given parsed expression uses static acces ("::")
 */
static bool IsStaticExpression(const mvceditor::SymbolClass& parsedExpression) {

	// "parent" is not static; "parent" could be used to call
	// methods that are overidden
	if (parsedExpression.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("parent"), 0) == 0) {
		return false;
	}
	return
		parsedExpression.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("self"), 0) == 0
		|| (parsedExpression.ChainList.size() > 1 && parsedExpression.ChainList[1].startsWith(UNICODE_STRING_SIMPLE("::")));
}

/*
 * figure out a [local] variable's type by looking at the other variables at the symbol table.
 * Since the symbol table just stores the parsed assignment expression tree; the symbols in the symbol table
 * have a chain list that needs to be looked up (with the symbol table).
 * Yes, this will cause a recursive call (symbol table may call this function); but it will never be very deep.

 * @see VariableObserverClass
 * @param variable the variable's name.  This is a single token, ie "$this", "$aglob" no object
 *        operations.
 * @param scopeSymbols the scope to look for the variable in
 * @param symbolTable the symbol table is used to resolve the variable assigments.
 * @param expressionScope needed to use the symbol table
 * @param openedResourceFinders needed to use the symbol table
 * @param globalResourceFinder needed to use the symbol table
 * @return the variable's type; could be empty string if type could not be determined 
 */
static UnicodeString ResolveVariableType(const UnicodeString& expressionScope, 
										 const std::map<wxString, mvceditor::ResourceFinderClass*>& openedResourceFinders, 
										 mvceditor::ResourceFinderClass* globalResourceFinder,
										 bool doDuckTyping,
										 mvceditor::SymbolTableMatchErrorClass& error,
										 const UnicodeString& variable, 
										 const std::vector<mvceditor::SymbolClass>& scopeSymbols,
										 const mvceditor::SymbolTableClass& symbolTable) {
	UnicodeString type;
	if (scopeSymbols.empty()) {
		error.Type = mvceditor::SymbolTableMatchErrorClass::EMPTY_SYMBOL_TABLE;
		return type;
	}
	for (size_t i = 0; i < scopeSymbols.size(); ++i) {
		mvceditor::SymbolClass symbol = scopeSymbols[i];
		if (variable == symbol.Lexeme) {
			if (mvceditor::SymbolClass::PRIMITIVE == symbol.Type) {
				type = "primitive";
			}
			else if (mvceditor::SymbolClass::ARRAY == symbol.Type) {
				type = "array";
			}
			else if (!symbol.PhpDocType.isEmpty()) {
				
				// user declares a type (in a PHPDoc comment  @var $dog Dog
				type = symbol.PhpDocType;
			}
			else if (!symbol.ChainList.empty()) {
				
				// go through the chain list; the first item in the list may be a variable
				mvceditor::SymbolClass parsedExpression;

				// this is important; the lexeme of the thing to resolve always be the ChainList
				parsedExpression.Lexeme = symbol.ChainList[0];
				if (parsedExpression.Lexeme.endsWith("()")) {
					parsedExpression.Lexeme.remove(parsedExpression.Lexeme.length() - 2, 2);
				}
				parsedExpression.ChainList = symbol.ChainList;
				std::vector<mvceditor::ResourceClass> resourceMatches;
				symbolTable.ResourceMatches(parsedExpression, expressionScope, 
					openedResourceFinders, globalResourceFinder,resourceMatches, doDuckTyping, error);
				if (!resourceMatches.empty()) {
					if (mvceditor::ResourceClass::CLASS == resourceMatches[0].Type) {
						type = resourceMatches[0].Resource;
					}
					else {
						type =  resourceMatches[0].ReturnType;
					}
				}
			}
			break;
		}
	}
	return type;
}

/**
 * Figure out a resource's type by looking at all of the given finders.
 * @param resourceToLookup MUST BE fully qualified (class name  + method name,  or function name).  string can have the
 *        object operator "->" that separates the class and method name.
 * @param finders all of the finders to look in
 * @return the resource's type; (for methods, it's the return type of the method) could be empty string if type could 
 *         not be determined 
 */
static UnicodeString ResolveResourceType(UnicodeString resourceToLookup, 
										 const std::vector<mvceditor::ResourceFinderClass*>& resourceFinders) {
	UnicodeString type;

	// need to get the type from the resource finders
	// the resource finder query string needs to have '::' also remove the function markers "()" that
	// are put there by the expression parser
	resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE("::"));
	resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
	for (size_t j = 0; j < resourceFinders.size(); ++j) {
		mvceditor::ResourceFinderClass* finder = resourceFinders[j];
		if (finder->Prepare(mvceditor::StringHelperClass::IcuToWx(resourceToLookup)) && finder->CollectFullyQualifiedResource()) {
			if (finder->GetResourceMatchCount() == 1) {
				mvceditor::ResourceClass match = finder->GetResourceMatch(0);
				type = match.ReturnType;
			}
		}
		if (!type.isEmpty()) {

			// since we are doing exact lookups, only one should be found
			break;
		}
	}
	return type;
}

/**
 * Figure out the type of the initial lexeme in an expression chain. The initial 
 * element may be a variable, a function call, or a static class access. This logic
 * is not trivial; that's why it was separated.

 * @param parsedExpression the expression to resolved.
 * @param finders all of the finders to look in
 * @return the resource's type; (for methods, it's the return type of the method) could be empty string if type could not be determined 
 */
static UnicodeString ResolveInitialLexemeType(const mvceditor::SymbolClass& parsedExpression, 
											  const UnicodeString& expressionScope, 
											  const std::map<wxString, mvceditor::ResourceFinderClass*>& openedResourceFinders,
											  mvceditor::ResourceFinderClass* globalResourceFinder,
											  bool doDuckTyping,
											  mvceditor::SymbolTableMatchErrorClass& error,
											  const std::vector<mvceditor::SymbolClass>& scopeSymbols,
											  const mvceditor::SymbolTableClass& symbolTable) {
	UnicodeString start = parsedExpression.Lexeme;
	UnicodeString typeToLookup;
	std::vector<mvceditor::ResourceFinderClass*> allResourceFinders;
	allResourceFinders.push_back(globalResourceFinder);
	for (std::map<wxString, mvceditor::ResourceFinderClass*>::const_iterator it =  openedResourceFinders.begin(); it != openedResourceFinders.end(); ++it) {
		allResourceFinders.push_back(it->second);
	}
	if (start.startsWith(UNICODE_STRING_SIMPLE("$"))) {
		
		// a variable. look at the type from the symbol table
		typeToLookup = ResolveVariableType(expressionScope, openedResourceFinders, globalResourceFinder, doDuckTyping, error, 
				start, scopeSymbols, symbolTable);
	}
	else if (start.caseCompare(UNICODE_STRING_SIMPLE("self"), 0) == 0){
		
		// self is the static version of $this, need to look at the pseudo variable $this
		// that is put into the symbol table during parsing
		// and get the type from there
		for (size_t i = 0; i < scopeSymbols.size(); ++i) {
			if (UNICODE_STRING_SIMPLE("$this") == scopeSymbols[i].Lexeme && !scopeSymbols[i].ChainList.empty()) {
				typeToLookup = scopeSymbols[i].ChainList[0];
			}
		}
	}
	else if (start.caseCompare(UNICODE_STRING_SIMPLE("parent"), 0) == 0){
		
		// look at the class signature of the current class that is in scope; that will tell us
		// what class is the parent
		// this code assumes that the resource finders have parsed the same exact code as the code that the
		// symbol table has parsed.
		// also, determine the type of "parent" by looking at the scope
		UnicodeString scopeClass;
		UnicodeString scopeMethod;
		int32_t index = expressionScope.indexOf(UNICODE_STRING_SIMPLE("::"));
		if (index >= 0) {
			scopeClass.setTo(expressionScope, 0, index);
			scopeMethod.setTo(UNICODE_STRING_SIMPLE(""));
		}
		for (size_t i = 0; i < allResourceFinders.size(); ++i) {	
			typeToLookup = allResourceFinders[i]->GetResourceParentClassName(scopeClass, scopeMethod);
			if (!typeToLookup.isEmpty()) {
				break;
			}
		}
		if (typeToLookup.isEmpty()) {
			error.Type = mvceditor::SymbolTableMatchErrorClass::PARENT_ERROR;
			error.ErrorLexeme = scopeClass;
		}
	}
	else if (parsedExpression.ChainList.size() > 1) {

		// a function or a class. need to get the type from the resource finders
		// when ChainList has only one item, the item may be a partial function/class name
		// so we may not find it. 
		if (IsStaticExpression(parsedExpression)) {
			typeToLookup = start;
		}
		else {
			typeToLookup = ResolveResourceType(start, allResourceFinders);
		}
	}
	else {

		// when symbol's chain list has one item, it is from an expression that 
		// contains a partial function.  In this case, there is not need to catenate
		// ChainList items; doing so will result in a bad lookup 
		typeToLookup = start;
	}
	return typeToLookup;
}

/**
 * @return the "scope string" used throughout this class, in the Variables map and the ScopePositions map
 */
static UnicodeString ScopeString(const UnicodeString& className, const UnicodeString& functionName) {
	return className + UNICODE_STRING_SIMPLE("::") + functionName;
}

mvceditor::SymbolTableMatchErrorClass::SymbolTableMatchErrorClass()
	: ErrorLexeme()
	, ErrorClass()
	, Type(NONE) {
}

void mvceditor::SymbolTableMatchErrorClass::Clear() {
	Type = NONE;
	ErrorLexeme.remove();
	ErrorClass.remove();
}

bool mvceditor::SymbolTableMatchErrorClass::HasError() const {
	return Type != NONE;
}

void mvceditor::SymbolTableMatchErrorClass::ToVisibility(const mvceditor::SymbolClass& parsedExpression, const UnicodeString& className) {
	if (IsStaticExpression(parsedExpression)) {
		Type = mvceditor::SymbolTableMatchErrorClass::STATIC_ERROR;
	}
	else {
		Type = mvceditor::SymbolTableMatchErrorClass::VISIBILITY_ERROR;
	}
	if (!parsedExpression.ChainList.empty()) {
		ErrorLexeme = parsedExpression.ChainList.back();
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE(""));
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("::"), UNICODE_STRING_SIMPLE(""));
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
	}
	ErrorClass = className;	
}

void mvceditor::SymbolTableMatchErrorClass::ToTypeResolution(const UnicodeString& className, const UnicodeString& methodName) {
	
	// an error resolving one of the types in the ChainList (not necessarily the last item)
	Type = mvceditor::SymbolTableMatchErrorClass::TYPE_RESOLUTION_ERROR;
	ErrorLexeme = methodName;
	ErrorClass = className;
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("::"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
}

void mvceditor::SymbolTableMatchErrorClass::ToArrayError(const UnicodeString& className, const UnicodeString& methodName) {
	Type = mvceditor::SymbolTableMatchErrorClass::ARRAY_ERROR;
	ErrorLexeme = methodName;
	ErrorClass = className;
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("::"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
}

void mvceditor::SymbolTableMatchErrorClass::ToPrimitiveError(const UnicodeString& className, const UnicodeString& methodName) {
	Type = mvceditor::SymbolTableMatchErrorClass::PRIMITIVE_ERROR;
	ErrorLexeme = methodName;
	ErrorClass = className;
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("::"), UNICODE_STRING_SIMPLE(""));
	ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
}

void mvceditor::SymbolTableMatchErrorClass::ToUnknownResource(const mvceditor::SymbolClass& parsedExpression, const UnicodeString& className) {
	if (!parsedExpression.ChainList.empty()) {
		if (IsStaticExpression(parsedExpression)) {
			Type = mvceditor::SymbolTableMatchErrorClass::UNKNOWN_STATIC_RESOURCE;
		}
		else {
			Type = mvceditor::SymbolTableMatchErrorClass::UNKNOWN_RESOURCE;
		}
		ErrorClass = className;
		ErrorLexeme = parsedExpression.ChainList.back();		
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE(""));
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("::"), UNICODE_STRING_SIMPLE(""));
		ErrorLexeme.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE(""));
	}
}

mvceditor::SymbolTableClass::SymbolTableClass() 
	: Parser()
	, Variables() {
	Parser.SetClassObserver(this);
	Parser.SetClassMemberObserver(this);
	Parser.SetFunctionObserver(this);
	Parser.SetVariableObserver(this);
}

void mvceditor::SymbolTableClass::ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment) {
	
}

void mvceditor::SymbolTableClass::DefineDeclarationFound(const UnicodeString& variableName, 
	const UnicodeString& variableValue, const UnicodeString& comment) {
	mvceditor::SymbolClass symbol;
	symbol.SetToPrimitive();
	symbol.Lexeme = variableName;
	GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE("")).push_back(symbol);
}

void mvceditor::SymbolTableClass::FunctionFound(const UnicodeString& functionName, const UnicodeString& signature, 
		const UnicodeString& returnType, const UnicodeString& comment) {
	
	// this call will automatically create the predefined variables
	GetScope(UNICODE_STRING_SIMPLE(""), functionName);
}

void mvceditor::SymbolTableClass::FunctionEnd(const UnicodeString& functionName, int pos) {
	// nothing for now
}

void mvceditor::SymbolTableClass::MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
	const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
	TokenClass::TokenIds visibility, bool isStatic) {
	std::vector<SymbolClass>& methodScope = GetScope(className, methodName);

	// create the $this variable
	SymbolClass variableSymbol;
	variableSymbol.Lexeme = UNICODE_STRING_SIMPLE("$this");
	variableSymbol.Type = mvceditor::SymbolClass::OBJECT;
	variableSymbol.ChainList.push_back(className);
	methodScope.push_back(variableSymbol);
}

void mvceditor::SymbolTableClass::MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
	// nothing for now
}

void mvceditor::SymbolTableClass::PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
	const UnicodeString& propertyType, const UnicodeString& comment, 
	TokenClass::TokenIds visibility, bool isConst, bool isStatic) {

	// do nothing; properties will be looked up using the ResourceFinder class
}

void mvceditor::SymbolTableClass::VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
	const SymbolClass& symbol, const UnicodeString& comment) {

	// ATTN: a single variable may have many assignments
	// for now just take the first one
	std::vector<mvceditor::SymbolClass>& symbols = GetScope(className, methodName);
	bool found = false;
	for (size_t i = 0; i < symbols.size(); ++i) {
		if (symbols[i].Lexeme == symbol.Lexeme) {
			found = true;
			break;
		}
	}
	if (!found) {
		symbols.push_back(symbol);
	}
}

void mvceditor::SymbolTableClass::CreateSymbols(const UnicodeString& code) {
	Variables.clear();
	
	// for now ignore parse errors
	mvceditor::LintResultsClass results;
	Parser.ScanString(code, results);
}

void mvceditor::SymbolTableClass::CreateSymbolsFromFile(const wxString& fileName) {
	Variables.clear();
	
	// for now ignore parse errors
	mvceditor::LintResultsClass results;
	Parser.ScanFile(fileName, results);
}

void mvceditor::SymbolTableClass::ExpressionCompletionMatches(const mvceditor::SymbolClass& parsedExpression, const UnicodeString& expressionScope,
															  const std::map<wxString, mvceditor::ResourceFinderClass*>& openedResourceFinders,
															  mvceditor::ResourceFinderClass* globalResourceFinder,
															  std::vector<UnicodeString>& autoCompleteVariableList,
															  std::vector<mvceditor::ResourceClass>& autoCompleteResourceList,
															  bool doDuckTyping,
															  mvceditor::SymbolTableMatchErrorClass& error) const {
	if (parsedExpression.ChainList.size() == 1 && parsedExpression.Lexeme.startsWith(UNICODE_STRING_SIMPLE("$"))) {

		// if expression does not have more than one chained called AND it starts with a '$' then we want to match (local)
		// variables. This is just a SymbolTable search.
		std::vector<mvceditor::SymbolClass> scopeSymbols;
		std::map<UnicodeString, std::vector<mvceditor::SymbolClass>, UnicodeStringComparatorClass>::const_iterator it = Variables.find(expressionScope);
		if (it != Variables.end()) {
			scopeSymbols = it->second;
		}
		for (size_t i = 0; i < scopeSymbols.size(); ++i) {
			if (scopeSymbols[i].Lexeme.startsWith(parsedExpression.Lexeme)) {
				autoCompleteVariableList.push_back(scopeSymbols[i].Lexeme);
			}
		}
	}
	else {

		// some kind of function call / method chain call
		ResourceMatches(parsedExpression, expressionScope, openedResourceFinders, globalResourceFinder, 
			autoCompleteResourceList, doDuckTyping, error);
	}	
}

void mvceditor::SymbolTableClass::ResourceMatches(const mvceditor::SymbolClass& parsedExpression, const UnicodeString& expressionScope, 
												  const std::map<wxString, mvceditor::ResourceFinderClass*>& openedResourceFinders,
												  mvceditor::ResourceFinderClass* globalResourceFinder,
												  std::vector<mvceditor::ResourceClass>& resourceMatches,
												  bool doDuckTyping,
												  mvceditor::SymbolTableMatchErrorClass& error) const {
	std::vector<mvceditor::SymbolClass> scopeSymbols;
	std::map<UnicodeString, std::vector<mvceditor::SymbolClass>, UnicodeStringComparatorClass>::const_iterator it = Variables.find(expressionScope);
	if (it != Variables.end()) {
		scopeSymbols = it->second;
	}	
	std::vector<mvceditor::ResourceFinderClass*> allResourceFinders;
	allResourceFinders.push_back(globalResourceFinder);
	for (std::map<wxString, mvceditor::ResourceFinderClass*>::const_iterator it =  openedResourceFinders.begin(); it != openedResourceFinders.end(); ++it) {
		allResourceFinders.push_back(it->second);
	}
	UnicodeString typeToLookup = ResolveInitialLexemeType(parsedExpression, expressionScope, openedResourceFinders, 
		globalResourceFinder, doDuckTyping, error, scopeSymbols, *this);	

	// continue to the next item in the chain up until the second to last one
	// if we can't resolve a type then just exit
	if (typeToLookup.caseCompare(UNICODE_STRING_SIMPLE("primitive"), 0) == 0) {
		error.ToPrimitiveError(UNICODE_STRING_SIMPLE(""), parsedExpression.Lexeme);
	}
	else if (typeToLookup.caseCompare(UNICODE_STRING_SIMPLE("array"), 0) == 0) {
		error.ToArrayError(UNICODE_STRING_SIMPLE(""), parsedExpression.Lexeme);
	}
	else {
		for (size_t i = 1; i < (parsedExpression.ChainList.size() - 1) && !typeToLookup.isEmpty() && !error.HasError(); ++i) {	
			UnicodeString nextResource = typeToLookup + parsedExpression.ChainList[i];
			UnicodeString resolvedType = ResolveResourceType(nextResource, allResourceFinders);
			if (resolvedType.isEmpty()) {
				error.ToTypeResolution(typeToLookup, parsedExpression.ChainList[i]);
			}
			else if (typeToLookup.caseCompare(UNICODE_STRING_SIMPLE("primitive"), 0) == 0) {
				error.ToPrimitiveError(typeToLookup, parsedExpression.ChainList[i]);
			}
			else if (typeToLookup.caseCompare(UNICODE_STRING_SIMPLE("array"), 0) == 0) {
				error.ToArrayError(typeToLookup, parsedExpression.ChainList[i]);
			}
			typeToLookup = resolvedType;
		}
	}

	UnicodeString resourceToLookup;
	if (!typeToLookup.isEmpty() && parsedExpression.ChainList.size() > 1 && !error.HasError()) {
		resourceToLookup = typeToLookup + parsedExpression.ChainList.back();
		resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE("::")); 

		// remove the stuff leftover from the expression parser; the resource finder cannot handle them
		// and would result in lookup failures
		resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE("")); 
	}
	else if (!typeToLookup.isEmpty() && !error.HasError()) {

		// in this case; chain list is of size 1 (looking for a function / class name
		resourceToLookup = typeToLookup;
	}
	else if (!error.HasError() && parsedExpression.ChainList.size() > 1 && typeToLookup.isEmpty() && doDuckTyping) {
		
		// here, even if the type of previous items in the chain could not be resolved
		// but were also known NOT to be errors
		// perform "duck typing" lookups; just look for methods in any class
		resourceToLookup = parsedExpression.ChainList.back();
		resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("->"), UNICODE_STRING_SIMPLE("::")); 

		// remove the stuff leftover from the expression parser; the resource finder cannot handle them
		// and would result in lookup failures
		resourceToLookup.findAndReplace(UNICODE_STRING_SIMPLE("()"), UNICODE_STRING_SIMPLE("")); 
	}

	// now do the "final" lookup; here we will also perform access checks
	// and static access checks
	wxString wxResource = mvceditor::StringHelperClass::IcuToWx(resourceToLookup);
	bool visibilityError = false;
	bool isStaticCall = IsStaticExpression(parsedExpression);
	bool isThisCall = parsedExpression.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) == 0;
	bool isParentCall = parsedExpression.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("parent"), 0) == 0;
	for (size_t j = 0; j < allResourceFinders.size(); ++j) {
		mvceditor::ResourceFinderClass* finder = allResourceFinders[j];
		if (finder->Prepare(wxResource) && finder->CollectNearMatchResources()) {

			// now we loop through the possbile matches and remove stuff that does not 
			// make sense because of visibility rules or resources that are 
			// duplicated in two separate caches
			for (size_t k = 0; k < finder->GetResourceMatchCount(); ++k) {
				mvceditor::ResourceClass resource = finder->GetResourceMatch(k);
				bool isVisible = IsResourceVisible(resource, isStaticCall, isThisCall, isParentCall);
				if (!mvceditor::IsResourceDirty(openedResourceFinders, resource, finder) && isVisible) {
					resourceMatches.push_back(resource);
				}
				else if (!isVisible) {
					visibilityError = true;
				}
			}
		}
	}

	// don't overwrite a previous error (PRIMITIVE_ERROR, etc...)
	if (!error.HasError() && visibilityError && resourceMatches.empty()) {
		error.ToVisibility(parsedExpression, typeToLookup);
	}
	else if (!error.HasError() && resourceMatches.empty()) {
		error.ToUnknownResource(parsedExpression, typeToLookup);
	}
}

std::vector<mvceditor::SymbolClass>& mvceditor::SymbolTableClass::GetScope(const UnicodeString& className, 
		const UnicodeString& methodName) {
	UnicodeString scopeString = ScopeString(className , methodName);
	if (Variables[scopeString].empty()) {
		CreatePredefinedVariables(Variables[scopeString]);
	}
	return Variables[scopeString];
}

void mvceditor::SymbolTableClass::Print() const {
	UFILE *out = u_finit(stdout, NULL, NULL);
	for(std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass>::const_iterator it = Variables.begin(); it != Variables.end(); ++it) {
		std::vector<mvceditor::SymbolClass> scopedSymbols = it->second;
		UnicodeString s = it->first;
		u_fprintf(out, "Symbol Table For %S\n", s.getTerminatedBuffer());
		for (size_t j = 0; j < scopedSymbols.size(); ++j) {
			SymbolClass symbol = scopedSymbols[j];
			u_fprintf(out, "%d\t%S\t%d\n", (int)j, symbol.Lexeme.getTerminatedBuffer(), symbol.Type); 
		}
	}
	u_fclose(out);
}

void mvceditor::SymbolTableClass::CreatePredefinedVariables(std::vector<mvceditor::SymbolClass>& scope) {
	UnicodeString variables[] =  {
		UNICODE_STRING_SIMPLE("$GLOBALS"),
		UNICODE_STRING_SIMPLE("$_SERVER"),
		UNICODE_STRING_SIMPLE("$_GET"),
		UNICODE_STRING_SIMPLE("$_POST"),
		UNICODE_STRING_SIMPLE("$_FILES"),
		UNICODE_STRING_SIMPLE("$_REQUEST"),
		UNICODE_STRING_SIMPLE("$_SESSION"),
		UNICODE_STRING_SIMPLE("$_ENV"),
		UNICODE_STRING_SIMPLE("$_COOKIE"),
		UNICODE_STRING_SIMPLE("$php_errormsg"),
		UNICODE_STRING_SIMPLE("$HTTP_RAW_POST_DATA"),
		UNICODE_STRING_SIMPLE("$http_response_header"),
		UNICODE_STRING_SIMPLE("$argc"),
		UNICODE_STRING_SIMPLE("$argv")
	};
	for (int i = 0; i < 14; ++i) {
		SymbolClass variableSymbol;
		variableSymbol.Lexeme = variables[i];
		variableSymbol.Type = SymbolClass::PRIMITIVE;
		scope.push_back(variableSymbol);
	}
}

bool mvceditor::IsResourceDirty(const std::map<wxString, mvceditor::ResourceFinderClass*>& finders, 
								const ResourceClass& resource, mvceditor::ResourceFinderClass* resourceFinder) {
	bool ret = false;
	wxString matchFullName = resource.GetFullPath();
	std::map<wxString, mvceditor::ResourceFinderClass*>::const_iterator it = finders.begin();
	while (it != finders.end()) {

		// a match from one of the opened resource finders can never be 'dirty' because the resource cache 
		// has been updated by the Update() method
		if (it->first.CompareTo(matchFullName) == 0 && it->second != resourceFinder) {
			ret = true;
			break;
		}
		++it;
	}
	return ret;
}

mvceditor::ScopeFinderClass::ScopeFinderClass() 
	: ScopePositions()
	, Parser() {
	Parser.SetClassObserver(this);
	Parser.SetClassMemberObserver(this);
	Parser.SetFunctionObserver(this);
}

void mvceditor::ScopeFinderClass::ClassFound(const UnicodeString& className, const UnicodeString& signature, 
											 const UnicodeString& comment) {
	// nothing for neo
}

void mvceditor::ScopeFinderClass::DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
														 const UnicodeString& comment) {
	// nothing for now
}

void mvceditor::ScopeFinderClass::MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
		TokenClass::TokenIds visibility, bool isStatic) {
	int currentPos = Parser.GetCharacterPosition();
	PushStartPos(className, methodName, currentPos);
}

void mvceditor::ScopeFinderClass::MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
	UnicodeString scopeString = ScopeString(className, methodName);
	ScopePositions[scopeString].second = pos;
}

void mvceditor::ScopeFinderClass::PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		TokenClass::TokenIds visibility, bool isConst, bool isStatic) {
	// nothing for now
}

void mvceditor::ScopeFinderClass::FunctionFound(const UnicodeString& functionName, 
												const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment) {
	int currentPos = Parser.GetCharacterPosition();
	PushStartPos(UNICODE_STRING_SIMPLE(""), functionName, currentPos);
}

void mvceditor::ScopeFinderClass::FunctionEnd(const UnicodeString& functionName, int pos) {
	UnicodeString scopeString = ScopeString(UNICODE_STRING_SIMPLE(""), functionName);
	ScopePositions[scopeString].second = pos;
}


UnicodeString mvceditor::ScopeFinderClass::GetScopeString(const UnicodeString& code, int pos) {
	ScopePositions.clear();
	
	// for now ignore parse errors
	mvceditor::LintResultsClass results;
	Parser.ScanString(code, results);

	// ScopePositions are ranges; we just need to check which range pos falls in
	UnicodeString scopeString = ScopeString(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE(""));
	for (std::map<UnicodeString, std::pair<int, int>, UnicodeStringComparatorClass>::const_iterator it = ScopePositions.begin(); it != ScopePositions.end(); ++it) {

		// this is the scope IF pos is after this position but before the next one
		// map values are pairs themselves, hence the second.first and second.second
		if (pos >= it->second.first && pos <= it->second.second) {
			scopeString = it->first;
		}
		else if (pos >= it->second.first && it->second.first == it->second.second) {
			
			// special case to handles "bad" code where the scope does not end (functions that have been
			// declared but have no ending brace). PushStartPos() prepares the scope positions in
			// this manner
			scopeString = it->first;
		}
	}
	return scopeString;
}

void mvceditor::ScopeFinderClass::PushStartPos(const UnicodeString& className, const UnicodeString& functionName, int startPos) {
	UnicodeString scopeString = ScopeString(className, functionName);
	std::pair<int, int> pair;
	pair.first = startPos;
	pair.second = startPos;
	ScopePositions[scopeString] = pair;
}
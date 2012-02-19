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
#include <UnitTest++.h>
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/Php53LexicalAnalyzerImpl.h>
#include <FileTestFixtureClass.h>

// TODO: remove this macro
#define wxT(a) a

class LexicalAnalyzerTestClass : public FileTestFixtureClass {
public:	
	LexicalAnalyzerTestClass() 
		: FileTestFixtureClass() {
		Lexer = new pelet::LexicalAnalyzerClass();
	}
	
	virtual ~LexicalAnalyzerTestClass() {
		delete Lexer;
	}
	
	void CheckTokenLexeme(int token, UnicodeString expectedLexeme) {
		CHECK_EQUAL(token, Lexer->NextToken());
		UnicodeString actualLexeme;
		Lexer->GetLexeme(actualLexeme);
		CHECK_EQUAL(expectedLexeme, actualLexeme);
	}

	pelet::LexicalAnalyzerClass* Lexer;	
};

SUITE(LexicalAnalyzerTestClass) {

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindEasy) {
	CreateFixtureFile(wxT("test.php"),
		"<?php\n"
		"$s = 'hello';\n"
		"$a = 1 * 3;\n"
		"$b = -1;\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("hello"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("1"));
	CheckTokenLexeme('*', UNICODE_STRING_SIMPLE("*"));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("3"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$b"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	
	// php parser considers these separate
	CheckTokenLexeme('-', UNICODE_STRING_SIMPLE("-"));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("1"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindWhenFileEndsWithIdentifier) {
	UnicodeString code = _U(
		"function echoA"
	);
	CHECK(Lexer->OpenString(code));
	CheckTokenLexeme(T_FUNCTION, UNICODE_STRING_SIMPLE("function"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("echoA"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, OpenStringShouldbeAnalyzed) {
	UnicodeString code  = _U(
		"$s = 'hello';\n"
		"$a = 1 * 3;"
	);
	CHECK(Lexer->OpenString(code));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("hello"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("1"));
	CheckTokenLexeme('*', UNICODE_STRING_SIMPLE("*"));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("3"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindEasyIfStatement) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"if(NULL !== $value && !is_array($value)) {\n"
		"\t$value = (string) $value;\n"
		"}\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	std::string lexeme;
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_IF, UNICODE_STRING_SIMPLE("if"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("NULL"));
	CheckTokenLexeme(T_IS_NOT_IDENTICAL, UNICODE_STRING_SIMPLE("!=="));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$value"));
	CheckTokenLexeme(T_BOOLEAN_AND, UNICODE_STRING_SIMPLE("&&"));
	CheckTokenLexeme('!', UNICODE_STRING_SIMPLE("!"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("is_array"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$value"));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$value"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_STRING_CAST, UNICODE_STRING_SIMPLE("(string)"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$value"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
	
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleComments) {
	CreateFixtureFile(wxT("test.php"),
		"<?php\n"
		"/*\n"
		" *\n"
		" */\n"
		"function work() {\n"
		"}"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CHECK_EQUAL(T_COMMENT, Lexer->NextToken());
	CheckTokenLexeme(T_FUNCTION, UNICODE_STRING_SIMPLE("function"));
	
	/*
	 * test for single line, PHP Doc comments 
	 */
	CreateFixtureFile(wxT("test.php"),
		"<?php\n"
		"//for fun, let's enable every rule for every group for this client\r"
		"# testing another comment\r" 
		"/** this is a PHPDoc Comment */"
		"require_once('globals.php');\n"
	);
	file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_DOC_COMMENT, UNICODE_STRING_SIMPLE("/** this is a PHPDoc Comment */"));
	CheckTokenLexeme(T_REQUIRE_ONCE, UNICODE_STRING_SIMPLE("require_once"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("globals.php"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleUnterminatedComments) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"/*\n"
		" *\n"
		" * /\n"
		"function work() {\n"
		"}\n"
		"?>"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_ERROR_UNTERMINATED_COMMENT, UNICODE_STRING_SIMPLE(""));
	
	
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"//for fun, let's enable every rule for every group for this client\r"
		"require_once('globals.php');\n"
	);
	file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_REQUIRE_ONCE, UNICODE_STRING_SIMPLE("require_once"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("globals.php"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleLongComments) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"/* ***************************************************************************************************************************************************************************************\n"
		" * The following class extends the 'RecordSet' class.\n"
		" * ***************************************************************************************************************************************************************************************/\n"
		"/*\n"
		" * This class does not call the constructor of the parent ('RecordSet') class.\n"
		" */\n"
		"class ExtendedRecordSetForUnitTestDoesNotInitializeRcord extends RecordSet {\n"
		"}\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CHECK_EQUAL(T_COMMENT, Lexer->NextToken());
	CHECK_EQUAL(T_COMMENT, Lexer->NextToken());
	CheckTokenLexeme(T_CLASS, UNICODE_STRING_SIMPLE("class"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("ExtendedRecordSetForUnitTestDoesNotInitializeRcord"));
	CheckTokenLexeme(T_EXTENDS, UNICODE_STRING_SIMPLE("extends"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("RecordSet"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindClassTokens) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php \n"
		"require_once('globals.php');\n"
		"/*\n"
		" */\n"
		"class UserClass {\n"
		"  protected $_name;\n"
		"  var $id;\n"
		"  const NULL_ID = 0;\n"		
		"  function __construct() {\n"
		"    $this->_name = '';\n"
		"    $this->id = self::NULL_ID;\n"
		"  }\n"
		"\n"	
		"}\n"
		"class AdminClass extends UserClass implements IFace {\n"
		"  private $_superUser;\n"
		"  public function __construct() {\n"
		"    parent::__construct();\n"
		"  }\n"
		"}\r\n"
		"?>\r\n"
		"\r\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php "));
	CheckTokenLexeme(T_REQUIRE_ONCE, UNICODE_STRING_SIMPLE("require_once"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("globals.php"));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_COMMENT, Lexer->NextToken());
	CheckTokenLexeme(T_CLASS, UNICODE_STRING_SIMPLE("class"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("UserClass"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme(T_PROTECTED, UNICODE_STRING_SIMPLE("protected"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$_name"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VAR, UNICODE_STRING_SIMPLE("var"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$id"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_CONST, UNICODE_STRING_SIMPLE("const"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("NULL_ID"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("0"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_FUNCTION, UNICODE_STRING_SIMPLE("function"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("__construct"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$this"));
	CheckTokenLexeme(T_OBJECT_OPERATOR, UNICODE_STRING_SIMPLE("->"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("_name"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE(""));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$this"));
	CheckTokenLexeme(T_OBJECT_OPERATOR, UNICODE_STRING_SIMPLE("->"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("id"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("self"));
	CheckTokenLexeme(T_PAAMAYIM_NEKUDOTAYIM, UNICODE_STRING_SIMPLE("::"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("NULL_ID"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
	CheckTokenLexeme(T_CLASS, UNICODE_STRING_SIMPLE("class"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("AdminClass"));
	CheckTokenLexeme(T_EXTENDS, UNICODE_STRING_SIMPLE("extends"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("UserClass"));
	CheckTokenLexeme(T_IMPLEMENTS, UNICODE_STRING_SIMPLE("implements"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("IFace"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme(T_PRIVATE, UNICODE_STRING_SIMPLE("private"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$_superUser"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_PUBLIC, UNICODE_STRING_SIMPLE("public"));
	CheckTokenLexeme(T_FUNCTION, UNICODE_STRING_SIMPLE("function"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("__construct"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme('{', UNICODE_STRING_SIMPLE("{"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("parent"));
	CheckTokenLexeme(T_PAAMAYIM_NEKUDOTAYIM, UNICODE_STRING_SIMPLE("::"));
	CheckTokenLexeme(T_STRING, UNICODE_STRING_SIMPLE("__construct"));
	CheckTokenLexeme('(', UNICODE_STRING_SIMPLE("("));
	CheckTokenLexeme(')', UNICODE_STRING_SIMPLE(")"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
	CheckTokenLexeme('}', UNICODE_STRING_SIMPLE("}"));
	CheckTokenLexeme(T_CLOSE_TAG, UNICODE_STRING_SIMPLE("?>"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedSlashes) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = '\\\\';"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("\\"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedSingleQuoteStrings) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"	
		"$s = 'this \\\\ is an \\'escaped\\' \\n string';"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));

	// in PHP single quote strings the only escape sequence allowed is the escaped single quotes
	// double backslash should be turned into single backslash
	// \n should be left alone.
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this \\ is an 'escaped' \\n string"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedDoubleQuoteStrings) {

	// this is what we want the string to be:  this is an "escaped" string
	// but since the PHP code is inside a C string, we must escape the
	// double quotes of the PHP code and escape the quote in PHP which means
	// escape the double quote escape sequence in C; that's how we get 3 backslashes
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = \"this is an \\\"escaped\\\" string\";"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	
	// all strings are labeled as constant for now
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this is an \"escaped\" string"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStrings) {

	// heredocs follow the same escaping rules as double quoted strings.
	// except that double quotes do not have to be escaped.
	// this is what we want the string to be:  this is an "escaped" string
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this is an \"escaped\" string;"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("55"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStringsThatDontEndWithSemicolon) {

	// this test is for the semicolon AFTER the ending marker
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"EOF\r\n"
		";"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this is an \"escaped\" string;"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("55"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStringsWithEmptyLines) {

	// this test is for the semicolon AFTER the ending marker
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this is an \"escaped\" string;\n\nthis is an \"escaped\" string;"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("55"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}


TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleNowdocStrings) {

	// heredocs follow the same escaping rules as double quoted strings.
	// except that double quotes do not have to be escaped.
	// this is what we want the string to be:  this is an "escaped" string
	CreateFixtureFile(wxT("test.php"), 
		"<?php\n"
		"$s = <<<'EOF'\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("this is an \"escaped\" string;"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("55"));
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleWindowsLineEndings) {
	CreateFixtureFile(wxT("test.php"), 
		"<?php\r\n" // length= 6
		"$s = 'hello';\r\n" //length = 21
		"$a = 1 * 3;\r\n" //length = 34
		"$b = -1;\r\n"
	);
	std::string file = TestProjectDir;
	file += wxT("test.php");
	CHECK(Lexer->OpenFile(file));
	CheckTokenLexeme(T_OPEN_TAG, UNICODE_STRING_SIMPLE("<?php\r\n"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$s"));
	CHECK_EQUAL(7, Lexer->GetCharacterPosition());
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CHECK_EQUAL(10, Lexer->GetCharacterPosition());
	CheckTokenLexeme(T_CONSTANT_ENCAPSED_STRING, UNICODE_STRING_SIMPLE("hello"));
	CHECK_EQUAL(12, Lexer->GetCharacterPosition());
	CHECK_EQUAL(2, Lexer->GetLineNumber());
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$a"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("1"));
	CheckTokenLexeme('*', UNICODE_STRING_SIMPLE("*"));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("3"));
	CHECK_EQUAL(3, Lexer->GetLineNumber());
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CheckTokenLexeme(T_VARIABLE, UNICODE_STRING_SIMPLE("$b"));
	CheckTokenLexeme('=', UNICODE_STRING_SIMPLE("="));
	CHECK_EQUAL(38, Lexer->GetCharacterPosition());
	CheckTokenLexeme('-', UNICODE_STRING_SIMPLE("-"));
	CheckTokenLexeme(T_LNUMBER, UNICODE_STRING_SIMPLE("1"));
	CHECK_EQUAL(4, Lexer->GetLineNumber());
	CheckTokenLexeme(';', UNICODE_STRING_SIMPLE(";"));
	CHECK_EQUAL(T_END_OF_FILE, Lexer->NextToken());
}


TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionFirstFunction) {
	UnicodeString code = _U(
		"<?php echo"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("echo"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionSimpleVariable) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr2"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionFunctionArgument) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func($expr2"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr2"), last);
}


TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionFunctionChain) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func($expr2)->prop"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("func($expr2)->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionFunctionArgumentAsFunction) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func(funct2($expr2), $arr[3])->prop"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("func(funct2($expr2), $arr[3])->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionStaticMember) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2 = MyClass::$prop"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::$prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionConstMember) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2 = MyClass::DEFAULT_NU"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::DEFAULT_NU"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionObjectMethodChain) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = new MyClass;\n"
		"$expr2 = $expr->funct3('two')->prop"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr->funct3('two')->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionNoExpression) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr1 = new MyClass;\n"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionIndirectVariable) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr2 = 3;\n"
		"$expr1 = 'expr2';\n"
		"$$expr1"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr1"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionIndirectProperty) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr1 = 'prop';\n"
		"$expr2->$expr1"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr1"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionObjectOperator) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr2->"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr2->"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionStaticOperator) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"MyClass::"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::"), last);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, LastExpressionObjectOperatorWithWhitespace) {
	UnicodeString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr2\n"
		"->"
	);
	UnicodeString last = Lexer->LastExpression(code);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$expr2->"), last);
}

}

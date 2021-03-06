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
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#ifndef __filetestfixtureclass__
#define __filetestfixtureclass__

#include <string>
#include <unicode/ustream.h> //get the << overloaded operator, needed by UnitTest++
#include <iostream>

/**
 * This test fixture is useful for testing classes that read from files.
 */
class FileTestFixtureClass {

public:

	FileTestFixtureClass();
	
	virtual ~FileTestFixtureClass();
		
	/**
	 * Creates a file in the current working directory. The file will have the given contents.
	 * 
	 * @param fileName the name of the file.  The  name should be a relative path,
	 *			with the current working directory as the root,
	 * @param contents the file contents.
	 */
	void CreateFixtureFile(const std::string& fileName, const std::string& contents);
		
	/**
	 * 
	 * @var string full path to the temp directory for this test
	 */
	std::string TestProjectDir; 
};

/**
 * Create a UnicodeString from a char*.  This function is useful when creating a string
 * that is broken up into multiple lines of code; like this:
 *
 *   // does not compile in MSW 
 *   // error C2308: concatenating mismatched strings
 *   UnicodeString str = UNICODE_STRING_SIMPLE("line 1\n"
 *    "line 2");
 *
 *   // works
 *   UnicodeString str = _U("line 1\n"
 *    "line 2");
 */
UnicodeString _U(const char* str);

#endif // __filetestfixtureclass__

// Syntax error: Missing second output operator.
#include <iostream>
int main()
{
	std::cout << "Hello, World" std::endl;
	return 0;
}
/* Compiler output

ex1_15_4.cc:5:29: error: expected ';' after expression
        std::cout << "Hello, World" std::endl;
                                   ^
                                   ;
ex1_15_4.cc:5:30: error: reference to overloaded function could not be resolved; did you mean to call
      it?
        std::cout << "Hello, World" std::endl;
                                    ^~~~~~~~~
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/ostream:1020:1: note: possible target
      for call
endl(basic_ostream<_CharT, _Traits>& __os)
^
2 errors generated.
*/

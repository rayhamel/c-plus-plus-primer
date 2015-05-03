// Declaration error: Fail to use std:: namespace for name from library.
#include <iostream>
int main()
{
	cout << "Hello, World";
}
/* Compiler output:

ex1_15_7.cc:5:2: error: use of undeclared identifier 'cout'; did you mean 'std::cout'?
        cout << "Hello, World";
        ^~~~
        std::cout
/Library/Developer/CommandLineTools/usr/bin/../include/c++/v1/iostream:50:33: note: 'std::cout'
      declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
1 error generated.
*/

// Syntax error: Missing quotes around string literal.
#include <iostream>
int main()
{
	std::cout << Hey!;
	return 0;
}
/* Compiler output:

ex1_15_3.cc:5:15: error: use of undeclared identifier 'Hey'
        std::cout << Hey!;
                     ^
1 error generated.
*/

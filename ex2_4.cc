/*
* Write a program to check whether your predictions [in Exercise 2.3] were
* correct. If not, study this section until you understand what the problem is.
*/

/*
My assumptions about the program output were correct:

32
4294967264
32
-32
0
0
*/

/*
Compiler output:

ex2_4.cc:16:15: warning: implicit conversion changes signedness: 'int' to 'unsigned int'
      [-Wsign-conversion]
        std::cout << i - u << std::endl;
                     ^ ~
ex2_4.cc:17:19: warning: implicit conversion changes signedness: 'int' to 'unsigned int'
      [-Wsign-conversion]
        std::cout << u - i << std::endl;
                       ~ ^
2 warnings generated.
*/
#include <iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

	return 0;
}

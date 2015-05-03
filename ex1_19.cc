/*
* Revise the program you wrote for the exercises in section 1.4.1 (p. 13) that
* printed a range of numbers so that it handles input in which the first number
* is smaller than the second.
*/

// I was already clever enough to do this, but I'll do it again with if/else.
#include <iostream>
int main()
{
	int val1 = 0, val2 = 0;
	std::cout << "Enter two integers: ";
	std::cin >> val1 >> val2;
	if (val1 < val2) {
		while (val1 <= val2) {
			std::cout << val1 << std::endl;
			++val1;
		}
	} else {
		while (val2 <= val1) {
			std::cout << val2 << std::endl;
			++val2;
		}
	}
	return 0;
}

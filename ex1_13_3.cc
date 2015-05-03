// Exercise 1.11 using "for" loops.
#include <iostream>
int main()
{
	int val1 = 0, val2 = 0;
	std::cout << "Enter two integers: ";
	std::cin >> val1 >> val2;
	for (; val1 < val2; ++val1)
		std::cout << val1 << std::endl;
	for (; val2 < val1; ++val2)
		std::cout << val2 << std::endl;
	std::cout << val1 << std::endl;
	return 0;
}

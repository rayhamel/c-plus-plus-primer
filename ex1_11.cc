/*
* Write a program that prompts the user for two integers. Print each number in
* the range specified by those two integers.
*/
#include <iostream>
int main()
{
	int val1 = 0, val2 = 0;
	std::cout << "Enter two integers:" << std::endl;
	std::cin >> val1 >> val2;
	/*
	* Obviously, this is a silly way to do it, but I'm using only while loops
	* because that's what's being covered in this section.
	*/
	while (val1 < val2) {
		std::cout << val1 << std::endl;
		++val1;
	}
	while (val2 < val1) {
		std::cout << val2 << std::endl;
		++val2;
	}
	std::cout << val1 << std::endl;
	return 0;
}

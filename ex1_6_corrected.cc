#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	// Omit semicolons on lines 8 and 9, no other changes to ex1_6.cc.
	std::cout << "The sum of " << v1
	          << " and " << v2
	          << " is " << v1 + v2 << std::endl;
	return 0;
}

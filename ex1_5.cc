#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The first operand is " << v1 << std::endl;
	std::cout << "The second operand is " << v2 << std::endl;
	std::cout << "Their product is " << v1 * v2 << std::endl;
	return 0;
}

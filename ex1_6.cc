#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	/*
	* This code fragment is not legal because the ";" operator delimits each
	* line of code in C++. Therefore, the "<<" operators that begin lines 13 and
	* 14 have no left-hand operand and are illegal.
	*/
	std::cout << "The sum of " << v1;
	          << " and " << v2;
	          << " is " << v1 + v2 << std::endl;
	return 0;
}

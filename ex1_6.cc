/*
* Explain whether the following program fragment is legal:
*
* std::cout << "The sum of " << v1;
*           << " and " << v2;
*           << " is " << v1 + v2 << std::endl;
*
* If the program is legal, what does it do? If the program is not legal, why
* not? How would you fix it?
*/
#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	/*
	* This code fragment is not legal because the ";" symbol delimits each line
	* of code in C++. Therefore, the "<<" operators that begin lines 24 and 25
	* have no left-hand operand and are illegal, so the program won't compile.
	* This can be fixed by simply omitting the semicolons (ex1_6_corrected.cc).
	*/
	std::cout << "The sum of " << v1;
	          << " and " << v2;
	          << " is " << v1 + v2 << std::endl;
	return 0;
}

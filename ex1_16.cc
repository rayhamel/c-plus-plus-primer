/*
* Write your own version of a program that prints the sum of a set of integers
* read from "cin".
*/
#include <iostream>
int main()
{
	int sum = 0;
	std::cout << "Please input a list of integers to sum:" << std::endl;
	// Book example uses a "while" loop.
	for (int value = 0; std::cin >> value; sum += value);
	std::cout << "The sum is " << sum << ". Have a nice day!" << std::endl;
	return 0;
}

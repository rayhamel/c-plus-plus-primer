/*
* Write a program that reads several transactions for the same ISBN. Write the
* sum of all the transactions that were read.
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item sum;
	std::cin >> sum;
	for (Sales_item book; std::cin >> book; sum += book);
	std::cout << "The sum of the books is " << sum << std::endl;
	return 0;
}

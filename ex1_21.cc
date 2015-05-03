/*
* Write a program that reads two Sales_item objects that have the same ISBN and
* produces their sum.
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book1, book2;
	std::cout << "Enter two books: " << std::endl;
	std::cin >> book1 >> book2;
	std::cout << "The sum of the books is " << book1 + book2 << std::endl;
	return 0;
}

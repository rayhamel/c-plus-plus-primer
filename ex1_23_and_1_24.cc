/*
* Exercise 1.23: Write a program that reads several transactions and counts how
* many transactions occur for each ISBN.
*
* Exercise 1.24: Test the previous program by giving multiple transactions
* representing multiple ISBNs. The records for each ISBN should be grouped
* together.
*/

/*
* 1.23: I am assuming they mean consecutive transactions, like in Exercise 1.18, as
* there has not yet been any coverage of how to use data structures.
*/

/*
* 1.24: Program output:
*
* 0-201-78345-X 3 20.00 0-201-78345-X 2 25.00 0-201-78344-X 3 20.00
* 0-201-78345-X occurs 2 times
* 0-201-78344-X occurs 1 times
*/
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item currBook, book;
	if (std::cin >> currBook) {
		int count = 1;
		while (std::cin >> book) {
			if (book.isbn() == currBook.isbn())
				++count;
			else {
				std::cout << currBook.isbn() << " occurs " << count
				          << " times" << std::endl;
				currBook = book;
				count = 1;
			}
		}
		std::cout << currBook.isbn() << " occurs " << count
		          << " times" << std::endl;
	}
	return 0;
}

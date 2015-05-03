// std::cout << /*  "*/" /* "/*"  */;
#include <iostream>
int main()
{
	/*
	* Legal, no comments inside a string literal, and the outer quotation marks
	* are contained within comments.
	*/
	std::cout << /*  "*/" /* "/*"  */;
	return 0;
}

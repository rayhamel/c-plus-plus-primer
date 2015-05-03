// std::cout << /* "*/" */;
#include <iostream>
int main()
{
	/*
	* Illegal, no closing quotation mark of string literal outside comment, so
	* it fails to compile.
	*/
	std::cout << /* "*/" */;
	return 0;
}

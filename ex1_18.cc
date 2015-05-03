/*
* Compile and run the program from this section, giving it only equal values as
* input. Run it again, giving it values in which no number is repeated.
*/

/*
* When the program is given all equal values:
*
* 1 1 1 1 1 1 1 1 1 1 1 1 1 1
* 1 occurs 14 times
*
* When the program is given no repeats:
*
* 1 2 3 4
* 1 occurs 1 times
* 2 occurs 1 times
* 3 occurs 1 times
* 4 occurs 1 times
*/
#include <iostream>
int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt
				          << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}

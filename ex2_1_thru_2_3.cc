/*
* Exercise 2.1: What are the differences between int, long, long long, and
* short? Between an unsigned and a signed type? Between a float and a double?
*
* Exercise 2.2: To calculate a mortgage payment, what types would you use for
* the rate, principal, and payment? Explain why you selected each type.
*
* Exercise 2.3: What output will the following code produce?
*
* unsigned u = 10, u2 = 42;
* std::cout << u2 - u << std::endl;
* std::cout << u - u2 << std::endl;
*
* int i = 10, i2 = 42;
* std::cout << i2 - i << std::endl;
* std::cout << i - i2 << std::endl;
*
* std::cout << i - u << std::endl;
* std::cout << u - i << std::endl;
*/

/*
* 2.1: Shorts, ints, longs and long longs all are ways of representing integer
* values in memory. Shorts and ints must be represented as at least 16 bits, and
* ints must be at least as large in memory as shorts. Longs must be at least 32
* bits and at least as large in memory as ints. Long longs, new for C++11, must
* be at least 64 bits and at least as large in memory as longs. The specific
* size in memory of each type depends on the compiler, but is usually larger
* than the minimum specification.
*
* 2.2: The principal is typically a large, positive integer. Visual Studio, G++
* and Clang++ all use 32-bit ints, so I could use an unsigned int with the most
* common compilers. According to the minima defined in the standard, I would
* need to use at least an unsigned long, since unsigned 16-bit integers only go
* to 65535. Individual payments are typically not a whole dollar amount, and the
* rate is a percentage, so I would represent both in terms of a double. If I
* were using these values in calculations with the principal, I would also
* represent it as a double.
*
* 2.3: I predict an output of:
*
* 32
* 4294967264
* 32
* -32
* 0
* 0
*/

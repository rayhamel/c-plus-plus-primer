/*
* Exercise 2.9: Explain the following definitions. For those that are illegal,
* explain what's wrong and how to correct it.
*
* (a) std::cin >> int input_value;
* (b) int i = { 3.14 };
* (c) double salary = wage = 9999.99;
* (d) int i = 3.14;
*
* Exercise 2.10: What are the initial values, if any, of each of the following
* variables?
*
* std::string global_str;
* int global_int;
* int main()
* {
*     int local_int;
*     std::string local_str;
* }
*
* Exercise 2.11: Explain whether each of the following is a declaration or a
* definition:
*
* (a) extern int ix = 1024;
* (b) int iy;
* (c) extern int iz;
*
* Exercise 2.12: Which, if any, of the following names are invalid?
*
* (a) int double = 3.14;
* (b) int _;
* (c) int catch-22;
* (d) int 1_or_2 = 1;
* (e) double Double = 3.14;
*
* Exercise 2.13: What is the value of "j" in the following program?
*
* int i = 42;
* int main()
* {
*     int i = 100;
*     int j = i;
* }
*
* Exercise 2.14: Is the following program legal? If so, what values are printed?
*
* int i = 100, sum = 0;
* for (int i = 0; i != 10; ++i)
*     sum += i;
* std::cout << i << " " << sum << std::endl;
*
* Exercise 2.15: Which of the following definitions, if any, are invalid? Why?
*
* (a) int ival = 1.01;
* (b) int &rval1 = 1.01;
* (c) int &rval2 = ival;
* (d) int &rval3;
*
* Exercise 2.16: Which, if any, of the following assignments are invalid? If
* they are valid, explain what they do.
*
* int i = 0, &r1 = i; double d = 0, &r2 = d;
* (a) r2 = 3.14159;
* (b) r2 = r1;
* (c) i = r2;
* (d) r1 = d;
*
* Exercise 2.17: What does the following code print?
*
* int i, &ri = i;
* i = 5; ri = 10;
* std::cout << i << " " << ri << std::endl;
*/

/*
* 2.9:
* (a) Illegal, variables cannot be initialized inside of input. Instead,
* initialize input_value, then assign it to the value read from input.
* (b) Illegal, compiler will not allow conversion of double to int with a list
* initialization, in C++11. Instead, initialize i as a double or long double, or
* omit the curly braces.
* (c) Illegal, the type of wage has not been declared. Replace the "=" operator
* between salary and wage with a comma.
* (d) i is initialized to 3, losing the information after the decimal point when
* the floating-point value 3.14 is cast to an integer.
*
* 2.10:
* global_str is "\0" (the empty string), and global_int is 0. local_int and
* local_str are uninitialized.
*
* 2.11:
* (a) It's a definition, because the assignment to 1024 overrides the "extern".
* (b) It's a definition, because it is missing the "extern" keyword.
* (c) It's a declaration, because it uses the "extern" keyword and has no
* initializer.
*
* 2.12:
* (a) Invalid, "double" is a reserved word.
* (b) Valid.
* (c) Invalid, dashes are parsed as the subtraction operator and "catch" is a
* reserved word.
* (d) Invalid, variable names must start with a letter or underscore.
* (e) Valid.
*
* 2.13:
* j is 100, since i is 100 within j's scope.
*
* 2.14:
* It is legal, the program will print "100 45", because i is 100 in the global
* scope and between 0 and 9 in the scope of the for loop.
*
* 2.15:
* (a) Valid.
* (b) Invalid, references may not be bound to a literal.
* (c) Valid.
* (d) Invalid, a reference must be initialized.
*
* 2.16:
* (a) Valid, it sets d (and therefore r2) to 3.14159.
* (b) Valid, it sets d (and therefore r2) to 0.0.
* (c) Valid, it sets i (and therefore r1) to 0.
* (d) Valid, it sets i (and therefore r1) to 0.
*
* 2.17:
* It would print "10 10".
*/

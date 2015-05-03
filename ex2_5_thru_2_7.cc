/*
* Exercise 2.5: Determine the type of the following literals. Explain the
* differences among the literals in each of the four examples:
*
* (a) 'a', L'a', "a", L"a"
* (b) 10, 10u, 10L, 10uL, 012, 0xC
* (c) 3.14, 3.14f, 3.14L
* (d) 10, 10u, 10., 10e-2
*
* Exercise 2.6: What, if any, are the differences between the following
* definitions:
*
* int month = 9, day = 7;
* int month = 09, day = 07;
*
* Exercise 2.7: What values do these literals represent? What type does each
* have?
*
* (a) "Who goes with F\145rgus?\012"
* (b) 3.14e1L
* (c) 1024f
* (d) 3.14L
*/

/*
* 2.5:
* (a) The first is the char (8-bit character) a. The second is the wchar_t
* (16-bit character) a. The third is the char string (null terminated character
* array) a\0. The fourth is the wchar_t string a\0.
* (b) The first is the signed int (at least 16-bit integer) 10. The second is
* the unsigned int 10. The third is the signed long (at least 32-bit integer)
* 10. The fourth is the unsigned long 10. The fifth is the signed int 10
* (represented in octal). The fifth is the signed int 12 (represented in
* hexadecimal).
* (c) The first is the double (double-precision floating-point) 3.14. The second
* is the float (single-precision floating point) 3.14. The third is the long
* double (extended-precision floating point) 3.14.
* (d) The first is the signed int 10, the second is the unsigned int 10, the
* third is the double 10.0, the fourth is the double 0.01.
*
* 2.6:
* An integer literal beginning with 0 is octal. 09 is an invalid octal value, so
* a program with that integer literal will fail to compile.
*
* 2.7:
* (a) Assuming a character set starting with ASCII, the char string
* "Who goes with Fergus?\n\0".
* (b) The long double 31.4.
* (c) The float 1024.0.
* (d) The long double 3.14.
*/

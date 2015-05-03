// Syntax error: Missing closing parenthesis in parameter list.
int main(
{
	return 0;
}
/* Compiler output:

ex1_15_1.cc:3:1: warning: generalized initializer lists are incompatible with C++98 [-Wc++98-compat]
{
^
ex1_15_1.cc:4:2: error: expected expression
        return 0;
        ^
ex1_15_1.cc:5:2: error: expected ';' after top level declarator
}
 ^
 ;
1 warning and 2 errors generated.
*/

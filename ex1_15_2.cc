// Syntax error: Terminate line with colon instead of semicolon.
int main()
{
	return 0:
}
/* Compiler output:

ex1_15_2.cc:4:10: error: expected ';' after return statement
        return 0:
                ^
                ;
1 error generated.
*/

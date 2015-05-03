// Type error; pass a string literal to function which expects an int argument.
int funcWithError(int integerArgument)
{
	return integerArgument;
}

int main()
{
	funcWithError("Error!");
	return 0;
}
/* Compiler output:

ex1_15_6.cc:2:5: warning: no previous prototype for function 'funcWithError' [-Wmissing-prototypes]
int funcWithError(int integerArgument)
    ^
ex1_15_6.cc:9:2: error: no matching function for call to 'funcWithError'
        funcWithError("Error!");
        ^~~~~~~~~~~~~
ex1_15_6.cc:2:5: note: candidate function not viable: no known conversion from 'const char [7]' to
      'int' for 1st argument
int funcWithError(int integerArgument)
    ^
1 warning and 1 error generated.
*/

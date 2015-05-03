// Declaration error: Misspell the name of a variable.
int main()
{
	int var = 0;
	return bar;
}
/* Compiler output:

ex1_15_8.cc:5:9: error: use of undeclared identifier 'bar'; did you mean 'var'?
        return bar;
               ^~~
               var
ex1_15_8.cc:4:6: note: 'var' declared here
        int var = 0;
            ^
1 error generated.
*/

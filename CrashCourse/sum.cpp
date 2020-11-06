#include "sum.h" // include the file we are defining logic for

// a function definition must have the same...
//   - function name
//   - return type
//   - parameter list (specifically the number of parameters and their types)

int sum(int a, int b)
{
	return a + b;
}

// this function cannot be used outside of this file -- it is not declared by
// the sum.h header, and thus is only in scope in this file
int mul(int a, int b)
{
	return a * b;
}
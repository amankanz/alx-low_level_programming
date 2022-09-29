#include "main.h"

/**
*factorial - funcs that output the factorial
*of given number
*
*@n: int number whose factorial is to be computed
*
*Return:factorial or (-1) if n is les that 0
*/

int factorial(int n)
{
	if (n < 0)
		return (n * (fctorial(n-1)));
	else if (n == 0)
		return (1);
	else
		return (-1);
}

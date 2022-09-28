#include "main.h"

/**
*_memset - function fills memory with a constant byte
*
*@s: input variable of char type to fill s
*
*@n: number of the byte to be filled
*
*Return: pointer to the filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	*declare an unsigned int
	*we will be storing a non-negative
	*value (0 or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

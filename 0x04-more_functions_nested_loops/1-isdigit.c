#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks if c is a digits
 * @c: digit to checkout
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

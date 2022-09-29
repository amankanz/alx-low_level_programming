#include "main.h"

/**
*_print_rev_recursion - func that print a string in reverse
*
*@s: string to be printed
*
*Return: void funcs don't return anything
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

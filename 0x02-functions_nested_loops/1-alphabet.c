#include "main.h"
/**
 * print_alphabet - prints alphabet lowercase
 * 
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		++x;
	}
	_putchar('\n');

}

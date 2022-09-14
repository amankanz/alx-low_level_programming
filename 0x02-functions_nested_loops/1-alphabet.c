nclude "main.h"
/**
 * print_alphabet - prints alphabet lowercase
 * 
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}
	_putchar('\n');

}

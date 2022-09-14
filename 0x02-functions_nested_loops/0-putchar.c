#include "main.h"

/**
* main - Entry pont
*
* Description:  program that prints _putchar, followed by a new line
* using the _putchar function.
*
* Return : On success 0
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

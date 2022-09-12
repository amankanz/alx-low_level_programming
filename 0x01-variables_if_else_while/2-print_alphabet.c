#include <stdio.h>

/**
* main - Entry point
*
* Description: Program prints alphabet in lowercase
*
* Return: return 0 (Sucess)
*/
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}

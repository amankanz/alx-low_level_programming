#include <stdio.h>
/**
* main - Entry
*
* Description: Print alphabet letters excepet e and q
* in lowercase.
*
* Return: retun 0 (Success)
*/
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr != 'e' && ltr != 'q')
			putchar(ltr);
	}
	putchar('\n');
	return (0);
}

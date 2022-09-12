#include <stdio.h>
/**
* main - Entry point
*
* Description: Pragram print alphabet in lowrcase and uppercase
*
* Return: return 0 (Sucess)
*/
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		putchar(ltr);
	for (ltr = 'A'; ltr <= 'Z'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}

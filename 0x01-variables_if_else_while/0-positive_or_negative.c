#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
* main - Entry point
*
* Description: This program assigns a random number
* to the variable n each time is executed.
* print value of n stauts; 0, negative or positive
*
* Return: retun 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* check if the value of n is zero, positive or negative then print */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
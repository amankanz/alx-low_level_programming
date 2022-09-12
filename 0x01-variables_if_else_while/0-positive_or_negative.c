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
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}

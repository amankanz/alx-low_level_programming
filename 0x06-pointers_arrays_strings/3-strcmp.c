#include <string.h>
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare to the first
 *
 * Return: returns an int as follows
 *	0, if the s1 and s2 are equal
 *	a negative value if s1 is less than s2;
 *	a positive value if s1 is greater than s2;
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	/**
	 * iterate throught src and
	 * compare it with dest
	 */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (s1[i] != s2[i])
		{
			/**
			 * return the difference btn
			 * them
			 */
			j = s1[i] - s2[i];
			break;
		}
		else
		{
			j = s1[i] - s2[i];
		}
	}
	return (j);
}

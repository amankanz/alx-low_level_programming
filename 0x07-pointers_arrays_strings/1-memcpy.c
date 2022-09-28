#include "main.h"

/**
*_memcpy - this function copies memory area
*
*@dest: pointer to the destination address of the memory
*
*@src: pointer to source address of the memory area to be copied
*
*@n: non-negative number of bytes in memory area to be copied
*
*Return: pointer to the destination address
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

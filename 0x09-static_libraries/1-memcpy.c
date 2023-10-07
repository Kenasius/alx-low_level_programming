#include "main.h"
/**
 * _memcpy - Copies a block of memory from one location to another
 *
 * @dest: The destination memory location, where the data will be copied to.
 * @src: The source memory location, where the data will be copied from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory location.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

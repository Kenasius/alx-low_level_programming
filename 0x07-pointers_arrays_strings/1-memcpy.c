#include "main.h"
/**
 * _memcpy - copy a block of memory from one location to another
 *
 * @dest: pointer to the destination memory block
 * @src: pointer to the source memory block
 * @n: the number of bytes to copy
 *
 * Returns a pointer to the destination memory block.
 *
 * The _memcpy() function copies the first n bytes from source memory block
 * to the destination memory block. The source and destination memory blocks
 * can overlap.
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

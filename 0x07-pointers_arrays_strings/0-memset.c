#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 *
 * @s: pointer to the start of the memory block
 * @b: the value to fill the memory block with
 * @n: the number of bytes to fill
 *
 * Returns a pointer to the filled memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

#include "main.h"
/**
 * Fills a block of memory with a specific value.
 * @param s The starting address of the memory to be filled.
 * @param b The value to fill the memory with.
 * @param n The number of bytes to fill.
 * @return A pointer to the filled memory block.
 * @note The memory pointed to by `s` must be large enough to hold `n` bytes.
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

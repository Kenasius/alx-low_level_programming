#include <stdlib.h>
#include "main.h"

/**
 * `malloc_checked` allocates `b` bytes of memory using malloc.
 * If there is not enough memory available,
 * the function prints an error message and exits the program.
 * @b: the number of bytes to allocate
 *
 * Returns: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

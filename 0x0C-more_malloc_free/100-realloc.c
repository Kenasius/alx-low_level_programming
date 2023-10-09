#include <stdlib.h>
#include "main.h"

/**
 * `realloc` reallocates the memory block pointed to by `ptr`
 * to a new size of `new_size` bytes.
 *
 * @ptr: the pointer to the memory block to reallocate
 * @new_size: the new size of the memory block
 *
 * Returns: a pointer to the reallocated memory block, or a null pointer
 * if there is not enough memory available.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}

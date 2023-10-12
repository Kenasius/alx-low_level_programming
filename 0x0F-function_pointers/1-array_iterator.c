#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a new line
 *
 * @array: the array to iterate over
 * @size: the number of elements in the array
 * @action: pointer to a function that prints the element,
 * either in regular or hex format
 *
 * Returns: is void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

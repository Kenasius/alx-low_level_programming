#include "function_pointers.h"
/**
 * int_index - returns the index of the first element in the array that
 * satisfies the given comparison function, or -1 if no such element exists.
 *
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to a function that compares two elements in the array and
 * returns a boolean value indicating whether the first element satisfies
 * the comparison function
 *
 * Returns: is zero (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

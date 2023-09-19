#include "main.h"
/**
 * reset_to_98 - Updates the value pointed to by a given integer pointer to 98.
 *
 * @n: A pointer to an integer whose value will be set to 98.
 *
 * Return: The value of 'n' after it has been updated to 98.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

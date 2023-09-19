#include "main.h"

/**
 * print_array - Prints the first 'n' elements of an array.
 *
 * @a: The name of the array.
 * @n: The number of elements from the array to be printed.
 *
 * Return: None (void).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a list of integers to the standard output,
 * separated by the given separator string.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 *
 * Returns: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

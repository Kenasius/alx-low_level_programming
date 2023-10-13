#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its arguments.
 *
 * @n: The number of arguments passed to the function.
 * @...: A variable number of arguments to calculate the sum of.
 *
 * Returns:
 *   * 0 if n is equal to 0.
 *   * The sum of all arguments otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

#include "main.h"
/**
 * _puts - Prints a string to the standard output followed by a newline.
 *
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

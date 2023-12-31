#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using function pointer
 *
 * @name: string to print
 * @f: pointer to function that prints the string
 *
 * Returns: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

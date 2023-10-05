#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @c: Character to print
 *
 * Return: 1 on success.
 * On error, returned -1, and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

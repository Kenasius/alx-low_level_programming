#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: Returns 1 on success
 * On error, -1 is returned, and errno is appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

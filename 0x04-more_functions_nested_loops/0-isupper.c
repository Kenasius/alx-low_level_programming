#include "main.h"

/**
 * _isupper - check uppercase letters
 * @c: check char
 * Return: 1 for uppercase and 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

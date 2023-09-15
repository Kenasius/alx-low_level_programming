#include "main.h"

/**
 * _isdigit - to check if numbers are 0 - 9
 * @c: to check char
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - to check the code
 *
 * Return: Always returns 0
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

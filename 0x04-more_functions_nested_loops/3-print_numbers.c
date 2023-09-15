#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * return: is void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}


3-main.c
#include "main.h"

/**
 * main - to check the code
 *
 * Return: Always returns 0
 */

int main(void)
{
    print_numbers();
    return (0);
}

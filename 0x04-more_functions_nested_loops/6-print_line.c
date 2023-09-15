#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of frequencies the character should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}


6-main.c
#include "main.h"

/**
 * main - to check the code
 *
 * Return: Always return 0
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}

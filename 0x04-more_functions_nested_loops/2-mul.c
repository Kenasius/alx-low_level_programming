#include "main.h"
/**
 * mul - multiply 2 integer
 * @a: first integer
 * @b: second integer
 * Return: addition of multiplication
 */

int mul(int a, int b)
{
	return (a * b);
}


2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - to check the code
 *
 * Return: Always return 0
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}

#include <stdio.h>

/**
 * main - This prints the lowercase alphabet in reverse sequence,
 * followed by a new line
 * Return: Always return 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * _strspn - find the length of the initial segment of a string
 *            which consists only of characters from a given set
 *
 * @s: pointer to the string to search
 * @accept: pointer to the set of characters to accept
 *
 * Returns the length of the initial segment of `s` which consists
 * only of characters from `accept`, or 0 if `s` starts with a
 * character not in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

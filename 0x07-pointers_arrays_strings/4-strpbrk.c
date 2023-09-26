#include "main.h"
/**
 * _strpbrk - find the first occurrence of any character in a string
 *            from a given set
 *
 * @s: pointer to the string to search
 * @accept: pointer to the set of characters to search for
 *
 * Returns a pointer to the first occurrence of any character in `s`
 * which is also in `accept`, or `NULL` if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

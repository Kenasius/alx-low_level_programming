#include "main.h"
/**
 * _strchr - find the first occurrence of a character in a string
 *
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * Returns a pointer to first occurrence of the character `c` in the string
 * `s`, or `NULL` if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

#include "main.h"
/**
 * _strstr - find the first occurrence of a substring in a string
 *
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to search for
 *
 * Returns a pointer to the first occurrence of the substring `needle` in the
 * string `haystack`, or `NULL` if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

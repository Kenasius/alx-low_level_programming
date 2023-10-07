#include "main.h"
/**
 * _strcmp - Compares two strings lexicographically
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: An int value indicating the relationship between the two strings:
 *     * A negative value if `s1` is less than `s2`.
 *     * A zero value if `s1` is equal to `s2`.
 *     * A positive value if `s1` is greater than `s2`.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}

#include "main.h"

/**
 * set_string - sets the value of a pointer to a char to a new string
 *
 * @s: pointer to the pointer to the string to be set
 * @to: pointer to the new string
 *
 * Changes value of the pointer pointed to by `s` to point to the new string
 * `to`. The old string pointed to by `s` is freed.
 *
 * Returns void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

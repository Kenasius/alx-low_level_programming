#include <unistd.h>

/**
 * Writes a single character to standard output.

 * @param c The character to write.

 * @return On success, the number of characters written (which is always 1).
 * On error, -1 is returned and `errno` is set to indicate the error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

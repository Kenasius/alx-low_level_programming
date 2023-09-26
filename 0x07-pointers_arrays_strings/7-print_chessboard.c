#include "main.h"
/**
 * print_chessboard - print a chessboard to the console
 *
 * @a: 2D array representing the chessboard
 *
 * Prints the chessboard to the console, with each piece represented by a
 * single character. Black pieces represented by lowercase letters and white
 * pieces are represented by uppercase letters.
 *
 * Returns void.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

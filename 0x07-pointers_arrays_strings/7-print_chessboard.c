#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int v, n;

	for (v = 0; v < 8; v++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[v][n]);
	}
}

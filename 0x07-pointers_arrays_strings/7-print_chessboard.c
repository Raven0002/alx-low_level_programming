#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 * @a: the 2D array that contains the data of the chessboard
 *
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}

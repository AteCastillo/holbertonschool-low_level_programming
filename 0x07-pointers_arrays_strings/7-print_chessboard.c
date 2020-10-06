#include "holberton.h"

/**
 * print_chessboard - a function that locates a character in a string
 * @a: pointer
 * Return:the pointer to char or 0 if dont have coincidence
 */

void print_chessboard(char (*a)[8])
{

	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}

	_putchar('\n');
	}
}

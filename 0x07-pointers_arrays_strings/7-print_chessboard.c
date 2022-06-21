#include "main.h"
#include "string.h"
/**
 * print_chessboard - Print chessboard
 *
 * @a: Pointer to a char
 *
 * Return: Returns void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int length;

	length = 8;

	for (i = 0; i < length; i++)
	{
		int j;

		for (j = 0; j < length; j++)
		{
			int val = a[i][j];

			_putchar(val);
		}
		_putchar(10);
	}
}

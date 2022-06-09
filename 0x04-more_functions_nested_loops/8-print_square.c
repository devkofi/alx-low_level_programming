#include "main.h"
/**
 * print_square - Print squares
 *
 * @size: Size of the box
 *
 * Return: Returns void
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}

		_putchar(10);
	}

	if (size <= 0)
	{
		_putchar(10);
	}
}

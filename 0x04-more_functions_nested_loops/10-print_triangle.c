#include "main.h"
/**
 * print_triangle - Prints a triangle using #
 *
 * @size: Size of the triangle
 *
 * Return: Returns void
 */
void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j <= i; j++)
		{

			_putchar(35);
		}
		_putchar(10);
	}
}

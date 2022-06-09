#include "main.h"
/**
 * print_diagonal - Print diagonal
 *
 * @n: Input
 *
 * Return: Returns void
 */
void print_diagonal(int n)
{
	int i;
	/*int j;*/

	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}

	if (n <= 0)
	{
		_putchar(10);
	}
}

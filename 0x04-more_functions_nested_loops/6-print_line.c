#include "main.h"
/**
 * print_line - Print line using underscore
 *
 *@n: Input
 *
 * Return: Returns void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}

	_putchar(10);

}

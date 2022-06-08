#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Input number
 *
 * Return: Returns the last digit of a number
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
	{
		n = n * -1;
	}
	j = n % 10;
	_putchar('0' + j);
	return (j);
}

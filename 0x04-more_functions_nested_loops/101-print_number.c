#include "main.h"
/**
 * print_number - Prints an integer
 *
 * @n: Input
 *
 * Return: Returns void
 */
void print_number(int n)
{
	if (n < 0 && n > -10)
	{
		_putchar(45);
		_putchar('0' + (-1 * n));

	}
	else if (n <= -10 && n > -100)
	{
		_putchar(45);
		_putchar('0' + ((n / 10) * -1));
		_putchar('0' + (-n % 10));
	}
	else if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n % 100) / 10));
		_putchar('0' + ((n % 100) % 10));
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + (n % 1000) / 100);
		_putchar('0' + ((((n % 1000) % 100) / 10)));
		_putchar('0' + (((((n % 1000) % 100) % 10))));
	}
	/**
	 * else
	 * {
	 *	_putchar('0' + (n / 10000));
	 *	_putchar('0' + (n % 10000) / 1000);
	 *	_putchar('0' + (((n % 10000) % 1000) / 100));
	 *	_putchar('0' + (((n % 10000) % 1000) % 100));
	 * }
	 */

}

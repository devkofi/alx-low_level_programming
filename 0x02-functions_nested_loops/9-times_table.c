#include "main.h"
void details(int j, int k, int remainder, int divisor);
/**
 * times_table - Times table
 *
 * Return: returns void
 */
void times_table(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int j;

		j = 0;

		while (j < 10)
		{
			int k;
			int remainder;
			int divisor;

			k = i * j;
			remainder = (k / 10);
			divisor = (k % 10);

			details(j, k, remainder, divisor);
			j++;
		}

		_putchar(10);
		i++;

	}
}
/**
 * details - Code refactor
 * @j: Number of lines
 * @k: Digits
 * @remainder: last digit
 * @divisor: lead digit
 */
void details(int j, int k, int remainder, int divisor)
{
	if (k > 9)
	{
		_putchar('0' + remainder);
		_putchar('0' + divisor);
	}
	else
	{
		_putchar('0' + k);
	}

	if (j < 9 && k < 10)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	else if (j==9)
	{
		_putchar(0);
	}
	else
	{
		_putchar(44);
		_putchar(32);
	}
}

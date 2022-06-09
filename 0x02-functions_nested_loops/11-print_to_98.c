#include "main.h"
/**
 * print_to_98 - Prints and stops at 98 with a new line
 *
 * @n: Inputs
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
				_putchar('0' + (n % 10));

			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			_putchar(44);
			_putchar(32);

			if (n == 98)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
				_putchar(10);
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n <= -10 && n > -100)
			{
				_putchar(45);
				_putchar('0' + ((n / 10) * -1));
				_putchar('0' + ((n % 10) * -1));
			}
			else if (n > -10 && n < 0)
			{
				_putchar(45);
				_putchar('0' + (n * -1));
			}
			else if (n == 0)
			{
				_putchar('0' + n);
			}
			else
			{
				if (n < 10)
				{
					_putchar('0' + n);
				}
				else
				{
					_putchar('0' + (n / 10));
					_putchar('0' + (n % 10));
				}

			}

			if (!(n == 98))
			{
				_putchar(44);
				_putchar(32);
			}
			n++;
		}
	}
}

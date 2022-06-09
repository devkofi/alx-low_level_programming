#include "main.h"
void print_fizz(void);
void print_buzz(void);
void refactor(int i);

/**
 * main - Entry to the program
 *
 * Return: Returns success (0);
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - Weeding out the non-programmers
 *
 * Return: Returns void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 10)
		{
			refactor(i);
			if ((i % 3 != 0) && (i % 5 != 0))
			{
				_putchar('0' + i);
			}
		}
		else
		{
			refactor(i);

			if ((i % 3 != 0) && (i % 5 != 0))
			{
				if (i != 100)
				{
					_putchar('0' + (i / 10));
					_putchar('0' + (i % 10));
				}
				else
				{
					_putchar(49);
					_putchar(48);
					_putchar(48);
				}
			}
		}
		_putchar(32);
	}

	_putchar(10);
}

/**
 * print_fizz - Prints fizz
 *
 * Return: Returns void
 */
void print_fizz(void)
{
	_putchar(70);
	_putchar(105);
	_putchar(122);
	_putchar(122);
}
/**
 * print_buzz - Prints buzz
 *
 * Return: Returns void
 */
void print_buzz(void)
{
	_putchar(66);
	_putchar(117);
	_putchar(122);
	_putchar(122);
}
/**
 * refactor - Refactors code for printing fizzbuzz
 *
 * @i: Input
 */
void refactor(int i)
{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				print_fizz();
				print_buzz();
			}
			else if ((i % 3 == 0) && (i % 5 != 0))
			{
				print_fizz();
			}
			else if ((i % 5 == 0) && (i % 3 != 0))
			{
				print_buzz();
			}
}

#include "main.h"
/**
 * more_numbers - Prints 10 times from 0-14
 *
 * Return: Returns void
 */
void more_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int j;


		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}

		}

		/*_putchar(10);*/
		i++;
	}
}

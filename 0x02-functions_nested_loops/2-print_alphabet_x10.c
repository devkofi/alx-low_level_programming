#include "main.h"
/**
 * print_alphabet - Prints Lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		int j;

		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}

		_putchar(10);
		i++;
	}
}

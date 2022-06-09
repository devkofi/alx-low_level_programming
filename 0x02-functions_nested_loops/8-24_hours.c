#include "main.h"
/**
 * jack_bauer - Print time for 24hr period
 *
 * Return: Returns void
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 24)
	{
		while (j < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(58);
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar(10);
			j++;
		}
		i++;
		j = 0;
	}
}

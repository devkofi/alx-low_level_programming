#include "main.h"
#include "string.h"
/**
 * print_rev - Prints to standard output in reverse
 *
 * @s: Pointer to a char
 *
 * Return: Returns void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		int c;

		c = s[i];

		_putchar(c);
	}

	_putchar(10);
}

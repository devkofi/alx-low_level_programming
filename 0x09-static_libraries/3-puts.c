#include "main.h"
#include "string.h"
/**
 * _puts - Prints to standard output
 *
 * @str: Pointer to a char
 *
 * Return: Returns void
 */
void _puts(char *str)
{
	int length;
	int i;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		int c;

		c = str[i];

		_putchar(c);
	}

	_putchar(10);
}

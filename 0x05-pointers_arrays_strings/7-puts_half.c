#include "main.h"
#include "string.h"
/**
 * puts_half - Prints half of the items to standard output
 *
 * @str: Pointer to a char
 *
 * Return: Returns void
 */
void puts_half(char *str)
{
	int length;
	int i;
	int a;

	length = strlen(str);
	a = (length / 2) % 2 != 0 ? (length / 2) : ((length - 1) / 2);

	for (i = a; i < length; i++)
	{

		int c;

		c = str[i];

		_putchar(c);
	}

	_putchar(10);
}

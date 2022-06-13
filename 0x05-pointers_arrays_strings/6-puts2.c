#include "main.h"
#include "string.h"
/**
 * puts2 - Prints even items to standard output
 *
 * @str: Pointer to a char
 *
 * Return: Returns void
 */
void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{

		int c;

		if (i % 2 != 0)
		{
			continue;
		}

		c = str[i];

		_putchar(c);
	}

	_putchar(10);
}

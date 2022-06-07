#include "main.h"

/**
 * _islower - Prints 1 if lower and 0 if otherwise
 *
 * @c: Input for the program
 *
 * Return: Returns success (0)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (_putchar(1));
	}
	else
	{
		return (_putchar(0));
	}
}

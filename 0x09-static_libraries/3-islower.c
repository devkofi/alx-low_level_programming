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
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

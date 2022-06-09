#include "main.h"
#include "_putchar.c"

/**
 * _isupper - Check for uppercase
 *
 * @c: Input
 *
 * Return: Returns an int
 */
int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}

#include "main.h"

/**
 * _isalpha - Prints 1 if letter, lowercase or uppercase
 *and 0 if otherwise
 *
 * @c: Input for the program
 *
 * Return: Returns success (0)
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isdigit - Check for a digit from (0 through 9)
 *
 * @c: Input
 *
 * Return: Returns an int
 */
int _isdigit(int c)
{
	if (!(c <= 57 && c >= 48))
	{
		return (0);
	}

	return (1);
}

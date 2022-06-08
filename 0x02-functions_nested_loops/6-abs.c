#include "main.h"
/**
 * _abs - Prints the absolute number of an integer
 *
 * @n: Input value
 *
 * Return: Returns the absolute the number
 */
int _abs(int n)
{
	int absol;

	if (n < 0)
	{
		absol = n * -1;
		return (absol);
	}

	return (n);
}

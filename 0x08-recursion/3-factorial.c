#include "main.h"
/**
 * factorial - Get the factorial of a number
 *
 * @n: Input number
 *
 * Return: Returns void
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

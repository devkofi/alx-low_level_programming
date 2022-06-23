#include "main.h"
/**
 * _sqrt_recursion - Square root of a number
 *
 * @n: Number for computation
 *
 * Return: Returns void
 */
int _sqrt_recursion(int n)
{
	int sqr_root(int low, int n);

	if (n < 0)
	{
		return (-1);
	}

	if (sqr_root(1, n) % 2 < 0.99 && (sqr_root(1, n) % 2) > 0.001)
	{

		return (-1);
	}

	return (sqr_root(1, n));
}
/**
 * sqrt - Square root helper
 *
 * @low: lower value
 * @high: higher value
 * @n: number
 *
 * Return: Returns an int
 */
int sqrt_recursive(int low, int high, int n)
{
	int middle;

	middle = (low + n) / 2;

	if ((middle * middle <= n) && ((middle + 1) > n))
	{
		return (middle);
	}
	else if ((middle * middle) < n)
	{
		return (sqrt_recursive(middle + 1, high, n));
	}
	else
	{
		return (sqrt_recursive(low, middle - 1, n));
	}

	return (low);
}

int sqr_root(int low, int val)
{
	int next_val;

	next_val = (low + val / low) / 2;

	if (low * low <= val && ((low + 1) * (low + 1)) > val)
	{
		return (low);
	}
	else
	{
		return (sqr_root(next_val, val));
	}
}

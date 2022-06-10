#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int i;

	largest = a;

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			if (largest < b)
			{
				largest = b;
			}
		}
		else
		{
			if (largest < c)
			{
				largest = c;
			}
		}
	}
	return (largest);
}

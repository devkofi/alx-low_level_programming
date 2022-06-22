#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * print_diagsums - Get sum of diagonals
 *
 * @a: Pointer to int
 * @size: Size to cover
 *
 * Return: Returns void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int val[2];
	int counter;

	counter = 0;

	for (i = 0; i < size; i++)
	{
		int k;

		for (k = 0; k < size; k++)
		{
			if (k == counter)
			{
				val[0] += a[k];
			}
		}
		counter++;
	}

	counter = 0;

	for (j = 0; j < size; j++)
	{
		int l;

		for (l = 0; l < size; l++)
		{
			if (l == counter)
			{
				val[1] += a[j];
			}
		}
		counter++;
	}

	printf("%d, %d\n", val[0], val[1]);
}

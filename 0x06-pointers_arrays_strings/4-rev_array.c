#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * reverse_array - Reverses an array
 *
 * @a: Pointer to an int
 * @n: Size of array
 *
 * Return: Returns void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int *temp;

	temp = (int *) malloc(n * sizeof(int));

	for (i = 0; i < 1; i++)
	{
		int k;

		for (k = 0; k < n; k++)
		{
			temp[k] = a[k];
		}
	}

	for (j = 0; j < n; j++)
	{
		a[n - 1 - j] = temp[j];
	}
}

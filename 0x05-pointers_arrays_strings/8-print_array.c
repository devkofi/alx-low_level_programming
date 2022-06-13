#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * print_array - Print elements of an array of integers
 *
 * @a: Pointer to int variable
 * @n: Size of the array
 *
 * Return: Returns void
 */
void print_array(int *a, int n)
{
	int length;
	int i;

	length = n;

	for (i = 0; i < length; i++)
	{
		printf("%d", a[i]);

		if (i != length - 1)
		{
			printf(", ");
		}

	}

	printf("\n");
}

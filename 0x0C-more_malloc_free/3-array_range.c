#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - Range of arrays
 *
 * @min: Minimum Value
 * @max: Maximum Value
 *
 * Return: Returns pointer to an int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int counter;

	counter = 0;
	ptr = (int *) malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		*(ptr + counter) = i;
		counter++;
	}

	return (ptr);
}

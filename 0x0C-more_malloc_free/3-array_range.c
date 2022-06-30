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

	ptr = (int *) malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (min > max)
	{
		return (NULL);
	}

	return (ptr);
}

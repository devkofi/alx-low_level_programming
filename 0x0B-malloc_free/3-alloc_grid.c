#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocate Memory for 2-D array
 *
 * @width: Rows
 * @height: Columns
 *
 * Return: Returns void
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	array = (int **) malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = (int *) malloc(height * sizeof(int));

		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}

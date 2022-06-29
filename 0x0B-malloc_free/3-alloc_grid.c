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

	array = (int **) malloc((width * height) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}

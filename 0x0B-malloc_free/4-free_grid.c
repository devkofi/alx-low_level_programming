#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2-D array memory
 *
 * @grid: Pointer to a 2-D array
 * @height: Height of the array
 *
 * Return: Returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

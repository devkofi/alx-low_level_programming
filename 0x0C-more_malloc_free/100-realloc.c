#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - Reallocate memory
 *
 * @ptr: Pointer
 * @old_size: Size on creating dynamic memory
 * @new_size: New size
 *
 * Return: Return void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	pointer = (void *) malloc(old_size);

	pointer = realloc(ptr, new_size);

	if (new_size == old_size)
	{
		pointer = (void *) malloc(old_size);
	}

	if (ptr == NULL)
	{
		pointer = (void *) malloc(new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (pointer);
}

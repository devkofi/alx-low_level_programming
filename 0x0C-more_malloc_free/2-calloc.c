#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Allocate Memory
 *
 * @nmemb: Number of elements
 * @size: Size
 *
 * Return: Returns void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (void *) calloc(nmemb, size);

	if (ptr == NULL)
	{
		ptr = NULL;
	}

	return (ptr);
}

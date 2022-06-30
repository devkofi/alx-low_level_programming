#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocate Memory
 *
 * @b: Size to allocate
 *
 * Return: Returns void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *) malloc(b + 1);

	if (ptr == NULL)
	{
		exit(98);
	}

	if (b == 0)
	{
		exit(98);
	}

	return (ptr);
}

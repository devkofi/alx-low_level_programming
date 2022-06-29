#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array
 *
 * @size: Size of the array
 * @c: Characters
 *
 * Return: Returns a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *) malloc(size * sizeof(char));

	if (size <= 0)
	{
		array = NULL;
	}

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	return (array);
}

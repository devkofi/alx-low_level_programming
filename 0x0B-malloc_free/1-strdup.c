#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * _strdup - String Duplicate
 *
 * @str: String
 *
 * Return: Returns pointer to a char
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *array;

	length = strlen(str) + 1;
	array = (char *) malloc(length * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		array = NULL;
		return (array);
	}
	for (i = 0; i < length; i++)
	{
		*(array + i) = *(str + i);
	}

	return (array);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - String concatenation
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: Returns pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, length_str1, length_str2, counter;

	length_str1 = strlen(s1);
	length_str2 = strlen(s2);
	array = (char *) malloc(((length_str1 + length_str2) * sizeof(char)));
	counter = 0;

	if (s2 == NULL || s2 == NULL)
	{
		array = "";
		return (array);
	}
	for (i = 0; i < length_str1; i++)
	{
		*(array + i) = *(s1 + i);
	}

	for (j = length_str1; j < (length_str1 + length_str2); j++)
	{
		*(array + j) = *(s2 + counter);
		counter++;
	}

	if (array != NULL)
	{
		return (array);
	}

	return (NULL);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - String concatenation
 *
 * @s1: First String
 * @s2: Second String
 * @n: Memory Size
 *
 * Return: Returns pointer to a void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	char *array;
	int length;
	int length_s1;
	int counter;

	counter = 0;
	length_s1 = strlen(s1);
	length = length_s1 + n;
	array = (char *) malloc(length * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	if (n > strlen(s2))
	{
		length = length_s1 + strlen(s2);
	}

	for (i = 0; i < length_s1; i++)
	{
		*(array + i) = *(s1 + i);
	}

	for (j = length_s1; j < length; j++)
	{
		*(array + j) = *(s2 + counter);
		counter++;
	}

	*(array + length) = '\0';

	return (array);
}

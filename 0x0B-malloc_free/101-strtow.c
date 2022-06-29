#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * strtow - String to words
 *
 * @str: String
 *
 * Return: Returns pointer to a char
 */
char **strtow(char *str)
{
	char **ptr;
	unsigned int i;
	int counter;

	counter = 0;
	ptr = (char **) malloc(strlen(str) * sizeof(char *));

	if (str == NULL || *str == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		if (!(*str == 32))
		{
			**(ptr + counter) = *(str + i);
			counter++;
		}
		else
		{
			continue;
		}
	}

	return (ptr);

}

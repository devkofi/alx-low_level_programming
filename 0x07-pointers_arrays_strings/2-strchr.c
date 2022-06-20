#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * _strchr - locate character in a string
 *
 * @s: Pointer to a char
 * @c: Character to locate
 *
 * Return: Returns pointer to a char
 */
char *_strchr(char *s, char c)
{
	char *temp;
	int length;
	int i;

	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			int size;
			int j;

			size = length - i;
			temp = (char *) malloc(size * sizeof(char));

			for (j = 0; j < size; j++)
			{
				temp[j] = s[j + i];
			}

			break;
		}
		else
		{
			temp = NULL;
		}
	}

	return (temp);
}

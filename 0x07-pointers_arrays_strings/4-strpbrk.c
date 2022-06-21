#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * _strpbrk - Search string for any set of bytes
 *
 * @s: Input string
 * @accept: Search string
 *
 * Return: Returns void
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;
	int length;
	int i;
	int k;
	int l;
	int counter;

	counter = 0;
	length = strlen(s);
	for (i = 0; i < length; i++)
	{
		int j;
		int accept_length;

		accept_length = strlen(accept);

		for (j = 0; j < accept_length; j++)
		{
			++counter;
			temp = (char *) malloc(counter * sizeof(char));
		}
	}
	for (k = 0; k < length; k++)
	{
		int temp_counter;

		temp_counter = 0;
		for (l = 0; l < (int)strlen(accept); l++)
		{
			if (s[k] == accept[l])
			{
				temp[temp_counter] = s[k];
				temp_counter++;
			}
		}
	}
	return (temp);
}

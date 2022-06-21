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
	int counter;

	counter = 0;
	length = strlen(s);
	temp = (char *) malloc(length * sizeof(char));

	for (i = 0; i < length; i++)
	{
		int j;
		int accept_length;

		accept_length = strlen(accept);
		
		if (s[i] == 10 || s[i] == 32 || s[i] == 44)
		{
			temp[counter] = s[i];
			counter++;
		}

		for (j = 0; j < accept_length; j++)
		{
			if (s[i] == accept[j])
			{
				temp[counter] = s[i];
				counter++;
			}
		}
	}
	
	return (temp);
}

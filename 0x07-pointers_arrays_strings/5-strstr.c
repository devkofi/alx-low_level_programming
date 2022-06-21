#include "main.h"
#include "string.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - Locate substring
 *
 * @haystack: String
 * @needle: Substring
 *
 * Return: Returns pointer to a var
 */
char *_strstr(char *haystack, char *needle)
{

	int i;
	int j;
	int length_string;
	int length_needle;
	int counter;
	char *temp;

	counter = 0;
	length_string = strlen(haystack);
	length_needle = strlen(needle);
	temp = (char *) malloc(length_needle * sizeof(char));

	for (i = 0; i < length_needle; i++)
	{
		for (j = 0; j < length_string; j++)
		{
			if (haystack[j] == needle[i])
			{
				temp[counter] = needle[i];
				counter++;
				break;
			}
		}
	}

	return (temp);
}

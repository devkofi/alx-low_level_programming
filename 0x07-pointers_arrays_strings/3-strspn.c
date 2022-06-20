#include "main.h"
#include "string.h"
/**
 * _strspn - Get the length of the prefix
 *
 * @s: Source
 * @accept: Value to compare
 *
 * Return: Returns an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int length;
	unsigned int size;

	size = strlen(accept);
	length = 0;

	for (i = 0; i < size; i++)
	{
		int j;
		int compared_size;

		compared_size = strlen(s);

		for (j = 0; j < compared_size; j++)
		{
			if (accept[i] == s[j])
			{
				length++;
				break;
			}
		}
	}

	return (length);
}

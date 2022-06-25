#include "main.h"
#include "string.h"
/**
 * _strcpy - Copy string from one destination to the other
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: Returns a pointer to a char array
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	length = strlen(src);

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

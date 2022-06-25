#include "main.h"
#include "string.h"
/**
 * _memcpy - Copies memory area from source to destination
 *
 * @dest: Destination
 * @src: Source
 * @n: Size to copy
 *
 * Return: Returns pointer to a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

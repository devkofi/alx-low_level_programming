#include "main.h"
#include "string.h"
/**
 * _strncpy - Copy string from one destination to another
 *
 * @dest: Destination String
 * @src: Source String
 * @n: Number of Characters
 *
 * Return: Returns pointer to a char variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}

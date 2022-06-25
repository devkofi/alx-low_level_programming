#include "main.h"
#include "string.h"
/**
 * _strncat - Concatenate String with
 *
 * @dest: Destination String
 * @src: Source String
 * @n: Number of Bytes
 *
 * Return: Returns pointer to a char
 */
char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);

	return (dest);
}

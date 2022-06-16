#include "main.h"
#include "string.h"
/**
 * _strcat - Concatenates source string to destination string
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Return pointer to a char
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

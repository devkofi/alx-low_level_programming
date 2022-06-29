#include "main.h"
#include "string.h"
/**
 * _memset - Copies byte to memory
 *
 * @s: Pointer to a char
 * @b: Duplicate character
 * @n: size to be copied
 *
 * Return: Returns a pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

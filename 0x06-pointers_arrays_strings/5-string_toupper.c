#include "main.h"
#include "string.h"
#include <ctype.h>
/**
 * string_toupper - Converts string to uppercase
 *
 * @c: String Input
 *
 * Return: Returns pointer to a char variable
 */
char *string_toupper(char *c)
{
	int i;
	int length;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		c[i] = toupper(c[i]);
	}

	return (c);
}

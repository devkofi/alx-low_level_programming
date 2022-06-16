#include "main.h"
#include "string.h"
/**
 * rot123 - Encode string with rot123
 *
 * @c: String Input
 *
 * Return: Return pointer to char
 */
char *rot13(char *c)
{
	replace_rot123_letters(c, 65);
	replace_rot123_letters(c, 97);

	return (c);
}

/**
 * replace_rot123_letters - Replaces range of characters within a range
 *
 * @c: String Input for operation
 * @lower_range: Lower Range
 *
 * Return: Returns void
 */
void replace_rot123_letters(char *c, int lower_range)
{
	int i;
	int length;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		if (c[i] >= (lower_range + 13) && c[i] <= (lower_range + 25))
		{
			c[i] -= 13;
			continue;
		}

	}
}

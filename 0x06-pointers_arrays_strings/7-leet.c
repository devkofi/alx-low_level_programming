#include "main.h"
#include "string.h"
/**
 * leet - Encode String
 *
 * @c: String Input
 *
 * Return: Returns pointer to a char
 */
char *leet(char *c)
{
	replaceChar(c, 65, 97, 52);
	replaceChar(c, 69, 101, 51);
	replaceChar(c, 79, 111, 48);
	replaceChar(c, 76, 108, 49);
	replaceChar(c, 84, 116, 55);

	return (c);
}
/**
 * replaceChar - Replace a character in a string
 *
 * @c: String for operation
 * @text_lower: Lower character to replace
 * @text_upper: Upper character to replace
 * @replace: Substitute text
 *
 * Return: Returns void
 */
void replaceChar(char *c, char text_lower, char text_upper, char replace)
{
	int i;
	int length;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		if (c[i] == text_lower || c[i] == text_upper)
		{
			c[i] = replace;
		}
		else
		{
			continue;
		}

	}
}

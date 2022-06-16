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
	int i;
	int length;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		if (c[i] == 65 || c[i] == 97)
		{
			c[i] = 52;
		}
		else if (c[i] == 69 || c[i] == 101)
		{
			c[i] = 51;
		}
		else if (c[i] == 79 || c[i] == 111)
		{
			c[i] = 48;
		}
		else if (c[i] == 76 || c[i] == 108)
		{
			c[i] = 49;
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			c[i] = 55;
		}
		else
		{
			continue;
		}
	}

	return (c);
}

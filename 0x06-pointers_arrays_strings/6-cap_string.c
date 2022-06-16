#include "main.h"
#include "string.h"
/**
 * cap_string - Capitalize each word in string
 *
 * @c: String characterss
 *
 * Return: Returns pointer to char variable
 */
char *cap_string(char *c)
{
	int i;
	int length;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		int val;

		val = c[i];

		if (i == 0 && (val >= 96))
		{
			c[i] = val - 32;
		}

		if (c[i] == 9)
		{
			c[i] = 32;
		}

		if ((c[i - 1] == 32 || c[i - 1] == 10 || c[i - 1] == 46) && val >= 96)
		{
			c[i] = val - 32;
		}

		if (!((val >= 65 && val <= 90) || (val >= 97 && val <= 122) || (val == 32)))
		{
			continue;
		}
	}

	return (c);
}

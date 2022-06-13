#include "main.h"
#include "string.h"
/**
 * rev_string - Prints to output and reverses to output
 *
 * @s: Pointer to a char
 *
 * Return: Returns void
 */
void rev_string(char *s)
{
	int length;
	int i;		
	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		char temp_value;
		int c;

		temp_value = s[i];

		*(s + i) = s[length - 1 - i];
		*(s + length - 1 - i) = temp_value;
		
		c = s[i];
		_putchar(c);
	}

}

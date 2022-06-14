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
		int temp;
		temp = *(s + i);

		s[i] = *(s + length - i - 1);
		s[length - i - 1] = temp;
	}

}

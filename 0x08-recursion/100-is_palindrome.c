#include "main.h"
#include "string.h"
/**
 * is_palindrome - Check if string is a palindrome
 *
 * @s: String
 *
 * Return: Returns a void
 */
int is_palindrome(char *s)
{
	int length;
	int test;
	int counter;

	counter = 0;
	length = strlen(s);

	if (*(s + length - 1 - counter) == *(s + counter))
	{
		test = 1;
		counter++;
	}

	if (counter == length - 1)
	{
		return (test);
	}

	return (is_palindrome(*(s + 1)));
}

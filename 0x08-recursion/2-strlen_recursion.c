#include "main.h"
/**
 * _strlen_recursion - Print string length
 *
 * @s: Input character
 *
 * Return: Returns void
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 1;

	if (*s == '\0')
	{
		return (0);
	}

	return (counter + _strlen_recursion(s + 1));

}

#include "main.h"
/**
 * main - Entry to the main program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints Lowercase alphabets
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar(10);
}

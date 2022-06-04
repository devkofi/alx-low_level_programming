#include <stdio.h>
/**
 * main - Entry to the main program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}

	putchar(10);
	return (0);
}

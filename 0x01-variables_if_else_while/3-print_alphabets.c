#include <stdio.h>
/**
 * main - Entry to the program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	char alphabet = 'a';
	char capital = 'A';

	while (alphabet <= 122)
	{
		printf("%c", alphabet);
		alphabet++;
	}

	while (capital <= 90)
	{
		printf("%c", capital);
		capital++;
	}
	printf("\n");
	return (0);
}

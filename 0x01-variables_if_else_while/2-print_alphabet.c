#include <stdio.h>
/**
 * main - Entry to the program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 122)
	{
		printf("%c", alphabet);
		alphabet++;
	}
	printf("\n");
	return (0);
}

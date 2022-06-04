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
		int code = alphabet;

		if (alphabet == 101 || alphabet == 113)
		{
			continue;
		}
		putchar(code);
		alphabet++;
	}
	printf("\n");
	return (0);
}

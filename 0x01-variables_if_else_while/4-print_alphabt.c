#include <stdio.h>
/**
 * main - Entry to the program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	int counter;

	for (counter = 97; counter <= 122; counter++)
	{
		if (counter == 101 || counter == 113)
		{
			continue;
		}
		putchar(counter);
	}
	printf("\n");
	return (0);
}

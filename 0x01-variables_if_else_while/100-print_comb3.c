#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}

			putchar(i);
			putchar(j);

			if (!(i == 56 && j == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}

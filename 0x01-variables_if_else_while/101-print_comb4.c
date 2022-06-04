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
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 49; k <= 57; k++)
			{
				if (i == j || i == k || j == k || i > j || i > k || j > k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (!(i == 55 && j == 56 && k == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}

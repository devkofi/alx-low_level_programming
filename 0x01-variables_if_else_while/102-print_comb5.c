#include <stdio.h>
/**
 * main - Main Entry for the program
 *
 * Return: Returns success (0)
 */
int main(void)
{
	int a;
	int b;
	int i;
	int j;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (i = 48; i <= 57; i++)
			{
				for (j = 49; j <= 57; j++)
				{
					if (i == j || i > j || a == b || a > b)
					{
						continue;
					}

					putchar(a);
					putchar(b);
					putchar(32);
					putchar(i);
					putchar(j);

					if (!(i == 56 && j == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

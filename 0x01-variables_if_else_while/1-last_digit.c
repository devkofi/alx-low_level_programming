#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main entry for the programming
 *
 * Return: Returns success (0)
 */
int main(void)
{
	int n;
	int remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remainder = abs(n) % 10;

	if (n < 0)
	{
		printf("Last digit of %d is -%d and is ", n, remainder);
		printf("less than 6 and not 0\n");
	}
	else
	{
		if (remainder > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, remainder);
		}
		else if (remainder < 6 && remainder > 0)
		{
			printf("Last digit of %d is %d and ", n, remainder);
			printf("is less than 6 and not 0\n");
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, remainder);
		}
	}
	return (0);
}

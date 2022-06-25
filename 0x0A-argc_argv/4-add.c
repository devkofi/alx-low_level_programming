#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry to the main program
 *
 * @argc: Argument count
 * @argv: Argument vector which is identical to one dimensional array
 *
 * Return: Returns success 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		int i;
		int counter;

		counter = 0;
		for (i = 1; i < argc; i++)
		{

			if (atoi(argv[i]) <= 0)
			{
				counter = 0;
				break;
			}

			counter += atoi(argv[i]);

		}

		if (counter > 0)
		{
			printf("%d\n", counter);
		}
		else
		{
			printf("Error\n");
		}
	}

	return (0);
}

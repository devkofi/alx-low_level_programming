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
	int multiply;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		int i;
		int counter;
		counter = 0;	
		for (i = 0; i < argc; i++)
		{
			counter += atoi(argv[i]);
			
			if ((atoi(argv[i]) >= 65 && atoi(argv[i]) <= 90) || (atoi(argv[i]) >= 141 && atoi(argv[i]) <= 172))
			{
				printf("Error");
				return (0);
			}
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

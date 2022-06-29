#include <stdio.h>
#include <stdlib.h>
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
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}

	return (0);
}

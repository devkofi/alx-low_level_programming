#include <stdio.h>
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
	if (argv[argc] == NULL)
	{
		printf("%d\n", argc);
	}

	return (0);
}

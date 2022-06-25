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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

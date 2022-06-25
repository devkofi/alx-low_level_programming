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

	printf("%s\n", argv[argc - 1]);
	return (0);
}

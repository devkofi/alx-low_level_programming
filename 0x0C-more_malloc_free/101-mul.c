#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - Main entry to the program
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Returns success 0
 */

int main(int argc, char *argv[])
{
	void printDigit(char *, int number, int base);
	int multiply;
	char c[100];

	multiply = atoi(argv[1]) * atoi(argv[2]);

	if (argc > 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar(10);
		exit(98);
	}

	printDigit(c, multiply, 10);

	return (0);
}

/**
 * printDigit - Prints digit to screen
 *
 * @ptr: Pointer to a char
 * @number: Number for operation
 * @base: Number base
 *
 * Return: Returns void
 */
void printDigit(char *ptr, int number, int base)
{

	int counter;
	unsigned int i;
	unsigned int end_of_string;
	char *reversed;

	counter = 0;
	while (number != 0)
	{
		int remainder;

		remainder = number % base;
		ptr[counter++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		number = number / base;
	}

	ptr[counter] = '\0';
	end_of_string = counter - 1;
	reversed = (char *) malloc(end_of_string * sizeof(char));

	for (i = 0; i <= end_of_string; i++)
	{
		reversed[i] = ptr[end_of_string - i];
		putchar(reversed[i]);
	}

	free(reversed);
	putchar(10);
}

#include <stdio.h>
/**
 * main - Main entry for the code
 *
 * Return: Returns with success (0)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %llu byte(s)\n",
	(unsigned long long)sizeof(lli));
	printf("Size of a float: %.0f byte(s)\n", (float)sizeof(f));
	return (0);
}

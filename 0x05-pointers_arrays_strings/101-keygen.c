#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * main - Entry to the main program
 *
 * Return: Returns void
 */
void main(void)
{
	char keygen[] = "Today! Congrats";
	int i;
	int length;

	length = strlen(keygen);

	for (i = 0; i < length; i++)
	{
		printf("%s", keygen[i]);
	}
	printf("\n");

	return (0);

}

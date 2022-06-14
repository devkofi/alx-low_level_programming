#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * main - Entry to the main program
 *
 * Return: Returns void
 */
int main(void)
{
	char keygen[] = "Tada! Congrats";
	int i;
	int length;

	length = strlen(keygen);

	for (i = 0; i < length; i++)
	{
		printf("%c", keygen[i]);
	}

	return (0);

}

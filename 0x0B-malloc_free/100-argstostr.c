#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * argstostr - Copy string from pointer
 *
 * @ac: Counter
 * @av: Pointer to a 2-D array
 *
 * Return: Returns pointer to a char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(ac * sizeof(char));

	for (i = 0; i < (unsigned int)sizeof(ptr); i++)
	{
		*(ptr + i) = **av;
	}

	return (ptr);

}

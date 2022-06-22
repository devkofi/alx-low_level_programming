#include "main.h"
#include "string.h"
/**
 * set_string - Pointer to pointer
 *
 * @s: Pointer to a pointer
 * @to: Pointer to a char
 *
 * Return: Returns void
 */
void set_string(char **s, char *to)
{
	**s = *to;
}

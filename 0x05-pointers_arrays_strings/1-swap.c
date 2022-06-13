#include "main.h"
/**
 * swap_int - Swap two integers
 *
 * @a: First int number
 * @b: Second int number
 *
 * Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int temp_a;
	int temp_b;

	temp_a = *a;
	temp_b = *b;

	*a = temp_b;
	*b = temp_a;
}

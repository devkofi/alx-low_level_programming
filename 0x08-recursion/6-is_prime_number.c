#include "main.h"
/**
 * is_prime_number - Checks if it is a prime number
 *
 * @n: Input number
 *
 * Return: Returns 1 if prime and 0 if otherwise;
 */
int is_prime_number(int n)
{
	if (n <= 10 && n > 1)
	{
		return (n % 2);
	}

	if (n == 1)
	{
		return (0);
	}

	if (n <= 0)
	{
		return (0);
	}

	return (is_prime_number(n / 2));
}

#include "main.h"

/**
 * is_prime_number - check whether n is a prime number
 * @n: number to be checked
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_prime_number(n, divisor));
}

/**
 * _prime_number - check whether n is a prime number using recursion
 * @n: number to check prime
 *
 * @divisor: the divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int _prime_number(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (_prime_number(n, divisor + 1));
}

#include "main.h"

/**
 * factorial - function returns factorial of a given number
 * @n: integer whose factorial is to be calculated
 *
 * Return: factorial of n
 * -1 if n is negative
 *  1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

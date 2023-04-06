#include "main.h"
#include "_sq_root.c"

/**
 * _sqrt_recursion - a function that returns the natural square root of n
 * @n: integer whose square root is to be calculated
 *
 * Return: square root of n
 * -1 if not natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sq_root(n, 0));
}

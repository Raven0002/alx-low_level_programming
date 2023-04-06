#include "main.h"

/**
 * _sqrt_recursion - the natural square root of n
 * @n: number whose square root is to be calculated
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

/**
 * _sq_root - print sqrt of an integer
 * @n: the integer
 * @root: the root of n
 *
 * Return: square root of n
 * -1 if not natural square root
 */

int _sq_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (_sq_root(n, root + 1));
}

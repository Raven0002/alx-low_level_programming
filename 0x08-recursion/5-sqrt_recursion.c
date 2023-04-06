#include "main.h"
int _sqrt_recursion(int n)
/**
 * _sqrt_recursion - function returns the natural square root of n
 * @n: number whose square root is to be calculated
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (sqrt_recursion(n, 0));
}

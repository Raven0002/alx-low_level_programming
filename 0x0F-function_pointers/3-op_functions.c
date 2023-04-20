#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that returns the sum
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns division
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - funtion that returns remainder division
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}

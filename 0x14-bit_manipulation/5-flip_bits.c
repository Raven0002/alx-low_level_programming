#include "main.h"

/**
 * flip_bits - bits to convert one number to another number
 * @n: first number
 *
 * @m: second number
 *
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, i = 0;

	f = n ^ m;
	while (f > 0)
	{
		i += f & 1;
		f >>= 1;
	}
	return (i);
}

#include "main.h"

/**
 * set_bit - Sets value of a bit of 1 to index
 * @n: number
 * @index: index
 *
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;
	unsigned long int i = 1;

	b = (sizeof(unsigned long int) * 8);
	if (index > b)
		return (-1);

	i <<= index;
	*n = (*n | i);
	return (1);
}

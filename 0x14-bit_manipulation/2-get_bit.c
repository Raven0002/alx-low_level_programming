#include "main.h"

/**
 * get_bit - get the value of bit at index
 * @n: number
 * @index: index 
 *
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;
	int i;

	b = (sizeof(unsigned long int) * 8);
	if (index > b)
		return (-1);

	i = ((n >> index) & 1);
	return (i);
}

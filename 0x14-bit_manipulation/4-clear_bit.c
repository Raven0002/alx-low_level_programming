#include "main.h"

/**
 * clear_bit - sets value ofbit to 0 at index
 * @n: number
 *
 * @index: index
 * Return: result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}

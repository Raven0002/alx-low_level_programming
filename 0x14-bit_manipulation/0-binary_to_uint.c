#include "main.h"

/**
 * binary_to_uint - convert binary number into unsigned int
 * @b: string containing a binary number
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == 49)
			i = (i << 1) | 1;

		else if (*b == 48)
			i <<= 1;

		else
			return (0);

		b++;
	}
	return (i);
}

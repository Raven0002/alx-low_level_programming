#include "main.h"

/**
 * _memset - pointer function
 * @s: a pointer to the array
 *
 * @b: the constant byte to be set
 *
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

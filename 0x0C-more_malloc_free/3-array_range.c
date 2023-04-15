#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min: starting point of the range
 *
 * @max: ending point of the range
 *
 * Return: result
 */

int *array_range(int min, int max)
{
	int *c, i, n;

	n = (max - min + 1);
	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * n);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		c[i] = min++;
	}
	return (c);
}

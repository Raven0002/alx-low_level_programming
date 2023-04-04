#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals of a multidimensional array
 * @a: the multidimensional array that contains data
 *
 * @size: size of the multidimensional array
 *
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, y;

	for (i = 0; i < size; i++)
	{
		y = (i * size) + i;
		sum1 = sum1 + a[y];
	}
	for (i = 1; i <= size; i++)
	{
		y = (i * size) - i;
		sum2 = sum2 + a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}

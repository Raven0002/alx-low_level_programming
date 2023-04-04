#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: the multidimensional array that contains data
 *
 * @size: the size of the multidimensional array
 *
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int x, y;

	fo&r (x = 0; x < size; x++)
	{
		y = (x * size) + x;
		sum1 = sum1 + a[y];
	}
	for (x = 1; x <= size; x++)
	{
		y = (x * size) - x;
		sum2 = sum2 + a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}

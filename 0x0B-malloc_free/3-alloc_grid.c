#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer representing the number of columns in the 2D array
 *
 * @height: integer representing the number of rows in the 2D array
 *
 * Return: result
 */

int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = (int **) malloc(height * sizeof(int *));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = (int *) malloc(width * sizeof(int));

		if (n[i] == NULL)
		{
			free(n);
			for (j = 0; j <= i; j++)
			{
				free(n[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}

	return (n);
}

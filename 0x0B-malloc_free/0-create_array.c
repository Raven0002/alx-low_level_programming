#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create chars array and initializes it with specific char
 * @size: the size of the array to create
 *
 * @c: character to initialize the array with
 *
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	n = malloc(sizeof(char) * size);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}

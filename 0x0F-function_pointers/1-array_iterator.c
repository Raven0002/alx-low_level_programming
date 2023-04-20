#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each element of array
 * @array: array
 * @size: size of the array
 * @action: function
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(*(array + a));
		}
	}
}

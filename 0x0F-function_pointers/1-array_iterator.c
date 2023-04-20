#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_iterator - executes function given as parameter on each element of array
 * @array : array
 * @size : the size of array
 * @action : the function to execute
 *
 * Return : result
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

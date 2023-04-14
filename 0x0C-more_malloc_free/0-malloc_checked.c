#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * malloc_checked -  function allocates memory using malloc
 * @b: unsigned integer 
 *
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

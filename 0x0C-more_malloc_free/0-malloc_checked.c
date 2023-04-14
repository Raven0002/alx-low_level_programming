#include "main.h"

/**
 * malloc_checked -  function allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}


#include "main.h"

/**
 * malloc_checked -  function that allocates memory
 * @b: size of memory to allocate
 *
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	char *c;

        c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}

#include "main.h"

/**
 * _calloc - function that allocate memory for array
 * @nmemb: the number of elements
 *
 * @size: the number of bytes
 *
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)c + i) = 0;
	}

	return (c);
}

#include "main.h"

/**
 * _memcpy - copy function from source to destination
 * @src: the string to copy from
 *
 * @dest: thr string to copy to
 *
 * @n: the number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

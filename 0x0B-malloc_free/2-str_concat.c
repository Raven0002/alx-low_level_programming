#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: first pointer to strings that need to be concatenated
 *
 * @s2: second pointer to strings that need to be concatenated
 *
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int X1 = 0, X2 = 0, n = 0, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + n))
	{
		X1++, n++;
	}
	while (*(s2 + i))
	{
		X2++, i++;
	}
	X2++;
	concat = malloc(sizeof(char) * (X1 + X2));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < X1; n++)
	{
		*(concat + n) = *(s1 + n);
	}
	for (i = 0; i < X2; i++)
	{
		*(concat + n) = *(s2 + i);
		n++;
	}
	return (concat);
}

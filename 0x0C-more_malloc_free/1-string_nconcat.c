#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: the number of bytes
 *
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int N, i, j, X;

	N = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (N < 0)
	{
		return (NULL);
	}
	if (N >= _strlen(s2))
	{
		N = _strlen(s2);
	}
	X = _strlen(s1) + N + 1;
	c = malloc(sizeof(*c) * X);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < N; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = '\0';
	return (c);
}

/**
 * _strlen - return string le
 * @string: string whose length is to be calculated
 *
 * Return: integer
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

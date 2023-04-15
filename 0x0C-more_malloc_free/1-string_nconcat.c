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
	int num, i, j, len;

	num = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	len = _strlen(s1) + num + 1;
	c = malloc(sizeof(*c) * len);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		c[i + j] = s2[j];
	}
	c[i + j] = '\0';
	return (c);
}

/**
 * _strlen - return the string length
 * @string: string whose length is to be calculated
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

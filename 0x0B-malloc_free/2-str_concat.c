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
	char *s;
	unsigned int n = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (; n < strlen(s1); n++)
	{
		s[n] = s1[n];
	}
	for (; j < strlen(s2); n++, j++)
	{
		s[n] = s2[j];
	}
	s[n] = '\0';
	return (s);
}

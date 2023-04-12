#include <stdlib.h>
#include <stdio.h>
#include "word_check.c"

/**
 * strtow - function that splits a string into words
 * @str: pointer to a string that needs to be split
 *
 * Return: result
 */

char **strtow(char *str)
{
	char **s, *n;
	int i, j = 0, X = 0, words, c = 0, start, end;

	while (*(str + X))
		X++;

	words = word(str);
	if (words == 0)
		return (NULL);

	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= X; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				n = (char *) malloc(sizeof(char) * (c + 1));
				if (n == NULL)
					return (NULL);

				while (start < end)
				{
					*n++ = str[start++];
				}
				*n = '\0';
				s[j] = n - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	s[j] = NULL;
	return (s);
}

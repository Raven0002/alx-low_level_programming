#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function concatenates all arguments of your program
 * @ac: argument count
 *
 * @av: the arguments 
 *
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int X = 0, i, j, n = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		X += _strlen(av[i]);
	}
	X += (ac + 1);
	s = malloc(X * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[n++] = av[i][j];
		}
		s[n++] = '\n';
	}
	return (s);
}

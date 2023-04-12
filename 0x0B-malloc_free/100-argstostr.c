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
	char *n;
	int i = 0, j, size = 0, x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	n = (char *) malloc((size + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			n[x] = av[i][j];
			j++;
			x++;
		}
		n[x] = '\n';
		i++;
		x++;
	}
	n[x] = '\0';

	return (n);
}

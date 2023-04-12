#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns pointer to newly allocated in memory
 * @str: pointer to string that needs to be duplicated
 *
 * Return: result
 */

char *_strdup(char *str)
{

	int i;
	int n = 0;
	char *j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}

	j = malloc(sizeof(char) * n + 1);

	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		j[i] = str[i];
	}
	return (j);
}

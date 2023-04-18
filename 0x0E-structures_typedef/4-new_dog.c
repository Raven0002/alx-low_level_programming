#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *ndog;
	char *j, *d;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	j = malloc((len1 + 1) * sizeof(char));
	if (j == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		j[i] = name[i];
	j[i] = '\0';
	ndog->name = j;
	ndog->age = age;
	d = malloc((len2 + 1) * sizeof(char));
	if (d == NULL)
	{
		free(j);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		d[i] = owner[i];
	d[i] = '\0';
	ndog->owner = d;
	return (ndog);
}

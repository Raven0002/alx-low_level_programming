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
	dog_t *ndog;

	if (name == NULL || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = strcpy(ndog->owner, owner);
	return (ndog);
}

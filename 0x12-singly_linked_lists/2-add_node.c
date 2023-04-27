#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str:  string that will be stored in the new node
 *
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	i = _strlen(str);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}


/**
 * _strlen - find string length
 * @str: the string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

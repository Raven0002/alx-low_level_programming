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
	list_t *new;
	int i, count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}

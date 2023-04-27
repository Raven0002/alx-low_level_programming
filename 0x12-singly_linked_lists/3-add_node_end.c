#include "lists.h"

/**
 * *add_node_end -  add new node at end of list_t
 * @head: first node in the linked list
 *
 * @str: string that will be stored in new node
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}

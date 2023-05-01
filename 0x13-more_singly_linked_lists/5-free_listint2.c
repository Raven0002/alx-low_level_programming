#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the first node
 *
 * Return: result
 */

void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		n = *head;
		*head = n->next;
		free(n);
	}
	*head = NULL;
}

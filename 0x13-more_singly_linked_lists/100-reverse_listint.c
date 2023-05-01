#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: the first node
 *
 * Return: result
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd = NULL;
	listint_t *nd2 = NULL;
	int i = 0;

	if (head == NULL)
		return (NULL);
	while (*head)
	{
		nd2 = (*head)->next;
		(*head)->next = nd;
		nd = *head;
		*head = nd2;
		i++;
	}
	*head = nd;
	return (*head);
}

#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: the first node
 *
 * Return: result
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd, *nd2;

	if (head == NULL || *head == NULL)
		return (NULL);

	nd = NULL;
	while (*head != NULL)
	{
		nd2 = (*head)->next;
		(*head)->nd2 = nd;
	        nd = *head;
		*head = nd2;
	}

	(*head) = nd;
	return (*head);
}

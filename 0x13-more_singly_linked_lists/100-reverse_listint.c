#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: the first node
 *
 * Return: result
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *nd;

	while (*head != NULL)
	{
		nd = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = nd;
	}
	*head = tmp;
	return (*head);
}

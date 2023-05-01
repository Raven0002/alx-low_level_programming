#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at idex
 * @head: the first node
 *
 * @index: index
 *
 * Return: result
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *n;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	n = tmp->next;
	tmp->next = (tmp->next)->next;
	free(n);
	return (1);
}

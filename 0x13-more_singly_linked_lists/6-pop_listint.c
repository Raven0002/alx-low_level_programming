include "lists.h"

/**
 * pop_listint - deletes head of list and returns data
 * @head: the first node
 *
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nd;

	if (*head == NULL)
		return (0);

	tmp = *head;
	nd = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (nd);
}

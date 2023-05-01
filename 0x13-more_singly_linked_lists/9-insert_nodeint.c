#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the first node
 *
 * @idx: index
 *
 * @n: number of nodes
 *
 * Return: result
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd;

	if (*head == NULL && idx > 0)
		return (NULL);

	if (idx == 0)
	{
		nd = malloc(sizeof(listint_t));
		if (nd == NULL)
			return (NULL);

		nd->n = n;
		nd->next = *head;
		*head = nd;
		return (nd);
	}
	return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
}

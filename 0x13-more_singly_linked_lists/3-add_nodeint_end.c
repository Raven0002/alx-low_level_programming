#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of list
 * @head: the first node
 *
 * @n: number of nodes
 *
 * Return: result
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd, *tmp;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = NULL;
	if (*head == NULL)
		*head = nd;
	else
	{
		tmp = *head;
		while ((tmp->next) != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nd;
	}
	return (nd);
}

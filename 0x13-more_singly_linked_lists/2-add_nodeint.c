#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of list
 * @head: the first node
 *
 * @n: number of nodes
 *
 * Return: result
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd;

	nd = malloc(sizeof(listint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = *head;
	*head = nd;
	return (nd);
}

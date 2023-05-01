#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list.
 * @head: the first node
 *
 * @index: the nth node
 *
 * Return: result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (!(head->next))
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}

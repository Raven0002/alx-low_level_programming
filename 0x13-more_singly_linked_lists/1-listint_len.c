#include "lists.h"

/**
 * listint_len - returns the number of elements in list
 * @h: the first node
 *
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

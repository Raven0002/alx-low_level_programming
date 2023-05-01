#include "lists.h"

/**
 * print_listint - prints all elements of list
 * @h: the first node
 *
 * Return: result
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

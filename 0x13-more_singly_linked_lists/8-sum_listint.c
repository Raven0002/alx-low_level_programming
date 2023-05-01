#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: the first node
 *
 * Return: result
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}

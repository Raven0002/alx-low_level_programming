#include "lists.h"

/**
 * print_listint_safe - prits linked list
 * @head: the first node
 *
 * Return: result
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head, *check;
	size_t i = 0, j;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		tmp = tmp->next;
		check = head;
		j = 0;
		while (j < i)
		{
			if (tmp == check)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}

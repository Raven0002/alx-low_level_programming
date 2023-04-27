#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: first node
 *
 * Return: result
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

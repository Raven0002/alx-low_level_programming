#include "lists.h"


/**
 * free_listint_safe - frees linked list
 * @h: the first node
 *
 * Return: result
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listp_t *ptr, *nd, *tmp;
	listint_t *n;

	ptr = NULL;
	while (*h != NULL)
	{
		nd = malloc(sizeof(listp_t));
		if (nd == NULL)
			exit(98);
		nd->p = (void *)*h;
		nd->next = ptr;
		ptr = nd;
		tmp = ptr;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			if (*h == tmp->p)
			{
				*h = NULL;
				free_h(&ptr);
				return (i);
			}
		}
		n = *h;
		*h = (*h)->next;
		free(n);
		i++;
	}
	*h = NULL;
	free_h(&ptr);
	return (i);
}

/**
 * free_h - frees a linekd list
 * @head: the first node
 *
 * Return: result
 */

void free_helper(listp_t **head)
{
	listp_t *tmp;
	listp_t *n;

	if (head != NULL)
	{
		n = *head;
		while ((tmp = n) != NULL)
		{
			n = n->next;
			free(tmp);
		}
		*head = NULL;
	}
}

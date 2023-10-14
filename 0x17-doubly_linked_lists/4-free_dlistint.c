#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;

	if (p == NULL)
		return;
	if (p->next == NULL)
		free(p);
	else
	{
		free_dlistint(p->next);
		free(p);
	}
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index in a doubly linked list
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (0-based).
 *
 * Return: 1 if the node was successfully deleted, -1 if the node doesn't exist
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = p->next;
		if (*head)
			(*head)->prev = NULL;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < index; i++)
		p = p->next;

	if (p == NULL)
		return (-1);
	if (p->prev)
		p->prev->next = p->next;
	if (p->next)
		p->next->prev = p->prev;
	free(p);
	return (1);
}


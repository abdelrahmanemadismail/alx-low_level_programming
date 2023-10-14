#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a index in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve (0-based).
 *
 * Return: A pointer to the node at a given index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	p = head;
	i = 0;
	while (i < index && p)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
		return (NULL);

	return (p);
}

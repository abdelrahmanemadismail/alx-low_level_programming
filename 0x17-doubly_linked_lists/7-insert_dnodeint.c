#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a index in a doubly linked list
 * @h: Pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node (0-based).
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	p = *h;
	i = 0;
	while (p)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = p->next;
			new->prev = p;
			if (p->next)
				p->next->prev = new;
			p->next = new;
			return (new);
		}
		p = p->next;
		i++;
	}
	free(new);
	return (NULL);
}

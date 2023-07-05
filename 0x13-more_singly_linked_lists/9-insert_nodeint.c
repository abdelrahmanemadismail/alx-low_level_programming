#include "lists.h"

/**
 * insert_nodeint_at_index - function search node of linked list by index.
 * @head: the head of the linked list
 * @idx: the index of the element to add.
 * @n: the number to be stord.
 * Return:  the nth node of a listint_t or NULL if the node does not exist.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if ((*head) == NULL)
	{
		free(new);
		return (NULL);
	}
	p = *head;
	i = 0;
	new->n = n;
	while (p)
	{
		if (i == idx - 1)
		{
			new->next = p->next;
			p->next = new;
			return (new);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}

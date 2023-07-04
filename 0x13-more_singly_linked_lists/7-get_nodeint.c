#include "lists.h"

/**
 * get_nodeint_at_index - function search node of linked list by index.
 * @head: the head of the linked list
 * @index: the index of the element to search.
 * Return:  the nth node of a listint_t or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
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

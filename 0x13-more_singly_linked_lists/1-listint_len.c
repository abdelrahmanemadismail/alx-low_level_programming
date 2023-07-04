#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked list_t list.
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}

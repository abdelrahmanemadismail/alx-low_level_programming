#include "lists.h"

/**
 * print_len - function that returns the number of elements in
 * a linked list_t list.
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}

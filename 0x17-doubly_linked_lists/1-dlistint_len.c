#include "lists.h"
/**
 * dlistint_len - calc the number of  elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}

#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		printf("%i\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}

#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	unsigned int i = 0;

	while (p)
	{
		printf("%i\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}

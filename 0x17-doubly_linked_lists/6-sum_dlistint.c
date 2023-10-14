#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all elements in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all elements, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: the head of the linked list
 * Return: the Sum or if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	unsigned int i = 0;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		i++;
		p = p->next;
	}
	return (sum);
}

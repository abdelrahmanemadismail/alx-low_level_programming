#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: the head of the linked list
 * Return: the head node’s data (n) or if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{

	int n;
	listint_t *p;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	p = *head;
	*head = p->next;
	free(p);
	return (n);
}

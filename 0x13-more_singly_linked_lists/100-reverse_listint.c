#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the head of the linked list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1 = NULL, *p2;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		p2 = (*head)->next;
		(*head)->next = p1;
		p1 = *head;
		*head = p2;
	}
	*head = p1;
	return (*head);
}

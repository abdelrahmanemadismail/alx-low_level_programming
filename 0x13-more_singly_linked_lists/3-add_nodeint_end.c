#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the beginning of
 *a list_t list.
 * @head: the head of the linked list
 * @n: the Integer to be added to the list
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next)
		p = p->next;
	p->next = new;
	return (new);
}

#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the head of the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	if (p == NULL)
		return;
	free_listint(p->next);
	free(p);
}

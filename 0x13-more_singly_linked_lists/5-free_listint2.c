#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and sets head to NULL.
 * @head: the head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}

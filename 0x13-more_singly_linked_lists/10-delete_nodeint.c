#include "lists.h"

/**
 * delete_nodeint_at_index - function delete node of linked list by index.
 * @head: the head of the linked list
 * @index: the index of the element to delete, Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *h;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);


	if (index == 0)
	{
		h = *head;
		*head = h->next;
		free(h);
		return (1);
	}

	p = *head;
	i = 0;

	while (p)
	{
		if (i == index - 1)
		{
			h = p->next;
			p->next = h->next;
			free(h);
			return (1);
		}
		p = p->next;
		i++;
	}
	return (-1);
}

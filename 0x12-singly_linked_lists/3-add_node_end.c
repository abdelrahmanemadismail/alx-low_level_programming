#include "lists.h"

/**
 *  _strlen - function that returns the length of a string.
 * @s: string to calculate it's length
 * Return: the length of string
 */
int _strlen(char *s)
{
	int c = 0;
	char *p = s;

	while (*(p + c) != '\0')
	{
		c++;
	}
return (c);
}

/**
 * add_node_end - function that adds a new node at the beginning of
 *a list_t list.
 * @head: the head of the linked list
 * @str: the string to be added to the list
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	list_t *p = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = _strlen(s);
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

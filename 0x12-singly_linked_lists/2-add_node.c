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
 * add_node - function that adds a new node at the beginning of
 *a list_t list.
 * @head: the head of the linked list
 * @str: the string to be added to the list
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	new->str = s;
	new->len = _strlen(s);
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	unsigned int i = 0;
	while(p)
	{
		if(p->str == NULL)
			printf("[%i] %s\n", 0, p->str);
		else
			printf("[%i] %s\n", p->len, p->str);
		i++;
		p = p->next;
	}
	return i;
}

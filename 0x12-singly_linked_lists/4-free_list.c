#include "lists.h"

/**
 * free_node - function that frees a list_t node.
 * @node: node to be freed
 * Return: nothing
 */
void free_node(list_t *node)
{
	free(node->str);
	free(node);
}
/**
 * free_list - function that frees a list_t list.
 * @head: the head of the linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p = head;

	if (p == NULL)
		return;
	if (p->next == NULL)
		free_node(p);
	else
	{
		free_list(p->next);
		free_node(p);
	}
}

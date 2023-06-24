#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr : is a pointer to the memory previously allocated
 * @old_size : is the size, in bytes, of the allocated space for ptr
 * @new_size : is the new size, in bytes of the new memory block
 * Return: new pointer to the newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned char *n;
	unsigned char *o = (unsigned char *)ptr;
	unsigned int smaller = old_size;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (old_size > new_size)
	{
		smaller = new_size;
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	n = (unsigned char *)p;
	for (i = 0; i < smaller; i++)
	{
		n[i] = o[i];
	}
	free(ptr);
	return (p);
}

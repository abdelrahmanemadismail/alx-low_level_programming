#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: The number of elements in the array
 * @size : The size of every element.
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	ptr = (unsigned char *)p;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (p);
}

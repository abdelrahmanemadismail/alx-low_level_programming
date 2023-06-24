#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: The start of the range
 * @max : The end of the range
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}

	return (p);
}

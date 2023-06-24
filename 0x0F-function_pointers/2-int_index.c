#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of int to be searched
 * @size: size of array
 * @cmp: function pointer
 * Return: the index of the first element for which the cmp function or
 *  return -1 If no element matches or size  <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

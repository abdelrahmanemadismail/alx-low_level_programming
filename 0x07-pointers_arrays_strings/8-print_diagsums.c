#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a : list of int to be printed
 * @size : size of arry a
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, j, x1 = 0, x2 = 0;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		if (i == j)
			x1 += *(a + (i * size) + j);
		if ((i + j) == (size - 1))
			x2 += *(a + (i * size) + j);
	}
}
	printf("%d, %d\n", x1, x2);
}

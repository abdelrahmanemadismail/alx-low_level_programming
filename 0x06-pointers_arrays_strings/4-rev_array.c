#include "main.h"
/**
 *  reverse_array - function that reverses the content of an array of integers.
 * @a: the array to be reversed
 * @n: the number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int t;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

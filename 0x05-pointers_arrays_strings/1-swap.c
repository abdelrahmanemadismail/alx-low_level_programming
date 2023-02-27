#include "main.h"
/**
 * swap_int  - function that swaps the values of two integers.
 * @a : a pointer the first integer we want to swap
 * @b : a pointer the secend integer we want to swap
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}

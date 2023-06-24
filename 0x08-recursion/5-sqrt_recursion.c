#include "main.h"
/**
 * _sqrt_search - function that searching for the square root of n
 * @n : Number to calculate it squate root
 * @min: mimimum posibal number to be the root
 * @max: maximum posibal number to be the root
 * Return: square root of n
 */
int _sqrt_search(int n, int min, int max)
{
	int x;
	int x2;

	if (n == 0)
		return (0);
	if (n < 0 || max < min)
		return (-1);
	x = (min + max) / 2;
	x2 = x * x;
	if (x2 == n)
		return (x);
	else if (x2 > n)
		return (_sqrt_search(n, min, x - 1));
	else if (x2 < n)
		return (_sqrt_search(n, x + 1, max));
	return (-1);
}

/**
 * _sqrt_recursion - function that returns the square root of n
 * @n : Number to calculate it squate root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_search(n, 1, n));
}

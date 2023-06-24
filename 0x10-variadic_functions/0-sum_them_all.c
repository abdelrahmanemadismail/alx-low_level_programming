#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of parameters passed to the function
 * Return: the sum of all parameterd.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;
	va_list args;

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);
	return (sum);
}

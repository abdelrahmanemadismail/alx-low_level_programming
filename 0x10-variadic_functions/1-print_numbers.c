#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of parameters passed to the function.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		x = va_arg(args, int);
		printf("%i", x);
		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

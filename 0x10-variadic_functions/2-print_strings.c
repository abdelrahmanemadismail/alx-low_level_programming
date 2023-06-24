#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: the number of parameters passed to the function.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

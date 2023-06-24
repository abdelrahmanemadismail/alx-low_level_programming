#include "variadic_functions.h"
/**
 * print_char - printfs a char from var args
 * @args: va_list to print from
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}
/**
 * print_int - printfs a intger from var args
 * @args: va_list to print from
 * Return: void
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * print_float - printfs a float from var args
 * @args: va_list to print from
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", (float) va_arg(args, double));
}
/**
 * print_string - printfs a string from var args
 * @args: va_list to print from
 * Return: void
 */
void print_string(va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", arg);
}
/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";
	va_list args;

	types keys[] = {
		{ "c", print_char },
		{ "i", print_int },
		{ "f", print_float },
		{ "s", print_string }
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *keys[j].id)
			{
				printf("%s", separator);
				separator = ", ";
				keys[j].f(args);
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

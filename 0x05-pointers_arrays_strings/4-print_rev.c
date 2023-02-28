#include "main.h"
/**
 * print_rev -function that prints a string,in reverse,followed by a new line.
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0;
	char *p = s;
	int i;

	while (*(p + c) != '\0')
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

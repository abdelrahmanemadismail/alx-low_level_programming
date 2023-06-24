#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
_putchar('\n');
}

#include "main.h"
/**
 *  puts_half - function that  half of a string.
 * @str: string to be printed
 * Return: the length of string
 */
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (*(str + c) != '\0')
	{
		c++;
	}
	for (i = (c + 1) / 2; i < c; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}

#include "main.h"
/**
 *  puts2 - function that prints every other character of a string,
 * starting with the first character.
 * @str: string to be printed
 * Return: the length of string
 */
void puts2(char *str)
{
	int c = 0;
	int i;

	while (*(str + c) != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}

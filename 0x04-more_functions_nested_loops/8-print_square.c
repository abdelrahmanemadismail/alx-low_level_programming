#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size : is the size of the square
 * Description: 'the program's description'
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
	_putchar('\n');
}
for (j = 0; j < size; j++)
{
	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}

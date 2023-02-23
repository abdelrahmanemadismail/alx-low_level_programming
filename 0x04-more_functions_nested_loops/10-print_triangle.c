#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size : is the size of the triangle
 * Description: 'the program's description'
 */
void print_triangle(int size)
{
int i, j, x;
if (size <= 0)
{
	_putchar('\n');
}
for (j = size; j > 0; j--)
{
	for (x = 1; x < j; x++)
	{
		_putchar(' ');
	}
	for (i = size; i >= j; i--)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}

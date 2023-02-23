#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal.
 * @n : the number of times the char \ should be printed
 * Description: 'the program's description'
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
	_putchar('\n');
}
for (i = 1; i < n + 1; i++)
{
	for (j = i; j > 1; j--)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}

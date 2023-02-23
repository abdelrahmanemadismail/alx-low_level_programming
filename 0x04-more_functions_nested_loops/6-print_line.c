#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n : the number of times the char _ should be printed
 * Description: 'the program's description'
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
	_putchar('_');
}
_putchar('\n');
}

#include "main.h"
/**
 * print_number - print number only using _putchar
 * @n: the number to be printed
 * Description: 'the program's description'
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}

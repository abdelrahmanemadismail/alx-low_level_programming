#include "main.h"
/**
 * print_number - print number only using _putchar
 * @n: the number to be printed
 * Description: 'the program's description'
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
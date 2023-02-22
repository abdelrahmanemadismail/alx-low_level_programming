#include "main.h"
void print_3_digit(int c);
void print_2_digit(int c);
/**
 * print_times_table - function that prints the n times table,
 * starting with 0.
 * @n : n is greater than 15 or less than 0 the function should
 * not print anything
 * Description: 'the program's description'
 */
void print_times_table(int n)
{
int i;
int j;
int c;
if (n == 0)
{
	_putchar(0 + '0');
	_putchar('\n');
}
else if (n > 0 && n < 15)
{
for (j = 0; j <= n ; j++)
{
	for (i = 0; i <= n; i++)
	{
		c = i * j;
		if (i == 0)
		{
			_putchar(c + '0');
			_putchar(',');
		}
		else
		{
			if (c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c < 100)
			{
				print_2_digit(c);
			}
			else if (c < 1000)
			{
				print_3_digit(c);
			}
			if (i != n)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
}
}
/**
 * print_3_digit - function that prints three digit numbers
 * @c : c is the number to be printed
 *
 * Description: 'the program's description'
 */
void print_3_digit(int c)
{
	int d;
	int dd;
	int ddd;

	d = c % 10;
	dd = c % 100 / 10;
	ddd = c % 1000 / 100;
	_putchar(' ');
	_putchar(ddd + '0');
	_putchar(dd + '0');
	_putchar(d + '0');
}
/**
 * print_2_digit - function that prints two digit numbers
 * @c : c is the number to be printed
 *
 * Description: 'the program's description'
 */
void print_2_digit(int c)
{
	int d;
	int dd;

	d = c % 10;
	dd = c % 100 / 10;
	_putchar(' ');
	_putchar(' ');
	_putchar(dd + '0');
	_putchar(d + '0');
}

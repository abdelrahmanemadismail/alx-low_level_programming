#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The Integer to be checked
 * Return: the value of last digit of n
 *
 * Description: 'the program's description'
 */
int print_last_digit(int n)
{
int x = n % 10;
if (x < 0)
{
	x = -x;
}
_putchar(x + '0');
return (x);
}

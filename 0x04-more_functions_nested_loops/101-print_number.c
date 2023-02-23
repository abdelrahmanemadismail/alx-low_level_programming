#include "main.h"
/**
 * print_number - print number only using _putchar
 * @n: the number to be printed
 * Description: 'the program's description'
 */
void print_number(int n)
{
unsigned int num;
int d;
d = 1;
num = n;
if (n < 0)
{
	_putchar('-');
}

while (num / d >= 10)
{
	d *= 10;
}
while (d >= 1)
{
	int c;

	c = (num / d) % 10;
	_putchar(c + '0');
	d /= 10;
}
}

#include "main.h"
/**
 * times_table - function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Description: 'the program's description'
 */
void times_table(void)
{
int i;
int j;
int c;
int d;
int dd;
for (j = 0; j < 10; j++)
{
	for (i = 0; i < 10; i++)
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
				_putchar(c + '0');
			}
			else
			{
				d = c % 10;
				dd = c % 100 / 10;
				_putchar(' ');
				_putchar(dd + '0');
				_putchar(d + '0');
			}
			if (i != 9)
			{
				_putchar(',');
			}
		}
	}
	_putchar('\n');
}
}

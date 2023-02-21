#include "main.h"
/**
 * jack_bauer - function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Description: 'the program's description'
 */
void jack_bauer(void)
{
int i;
int j;
int x;
int y;
for (y = 0; y < 3; y++)
{
	for (x = 0; x < 10; x++)
	{
		for (j = 0; j < 6; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if (y == 2 && x == 4)
				{
					return;
				}
				_putchar(y + '0');
				_putchar(x + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(i + '0');
				_putchar('\n');
			}
		}
	}
}
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int n;
for (i = 0; i < 8; i++)
{
	for (j = i + 1; j < 9; j++)
	{
		for (n = j + 1; n < 10; n++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(n + '0');
			if (i != 7 || j != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}

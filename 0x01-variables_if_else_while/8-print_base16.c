#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int a;
for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}

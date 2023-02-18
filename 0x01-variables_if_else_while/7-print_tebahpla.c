#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}

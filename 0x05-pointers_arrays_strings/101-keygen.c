#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c[308];
for (i = 0 ; i < 308; i++)
{
	c[i]='9';
}
printf("%s", c);
return (0);
}

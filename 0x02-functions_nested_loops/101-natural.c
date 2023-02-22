#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int r = 0;
for (i = 1; i < 1024; i++)
{
	if (i % 5 == 0 || i % 3 == 0)
	{
		r += i;
	}
}
printf("%d\n", r);
return (0);
}

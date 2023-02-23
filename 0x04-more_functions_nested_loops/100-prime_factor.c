#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long n = 612852475143;

for (i = (int) sqrt(n) + 1; i > 2; i += 2)
{
	if (n % i == 0)
	{
		printf("%d\n", i);
		break;
	}
}
return (0);
}

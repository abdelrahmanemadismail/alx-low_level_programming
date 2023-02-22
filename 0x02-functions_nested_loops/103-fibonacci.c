#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
long int f1 = 1;
long int f2 = 2;
long int n = 0;
unsigned long int sum = 2;

while (n <= 4000000)
{
	n = f2 + f1;
	if (n % 2 == 0)
	{
		sum += n;
	}
	f1 = f2;
	f2 = n;
}
printf("%lu\n", sum);
return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int f1 = 1;
long int f2 = 2;
long int n;
printf("%ld, ", f1);
printf("%ld, ", f2);
for (i = 3; i < 50; i++)
{
	n = f2 + f1;
	printf("%ld, ", n);
	f1 = f2;
	f2 = n;
}
n = f2 + f1;
printf("%ld\n", n);


return (0);
}

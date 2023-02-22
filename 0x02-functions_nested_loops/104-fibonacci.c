#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int f1 = 1;
unsigned long int f2 = 2;
unsigned long int n;
printf("%lu, ", f1);
printf("%lu, ", f2);
for (i = 3; i < 98; i++)
{
	n = f2 + f1;
	printf("%lu, ", n);
	f1 = f2;
	f2 = n;
}
n = f2 + f1;
printf("%lu\n", n);


return (0);
}

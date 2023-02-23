#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i =-2147483648; i <= 2147483647; i++)
{   
	print_number(i);
	_putchar('\n');
}
return (0);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*fun)(int, int);

if (argc != 4)
{
	puts("Error");
	exit(98);
	return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
fun = get_op_func(argv[2]);
if (fun == NULL || argv[2][1] != '\0')
{
	puts("Error");
	exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
	puts("Error");
	exit(100);
}

result = fun(num1, num2);

printf("%d\n", result);
return (0);
}

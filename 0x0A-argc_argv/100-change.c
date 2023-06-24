#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int input, result = 0;

if (argc != 2)
{
	puts("Error");
	return (1);
}
input = atoi(argv[1]);
if (input <= 0)
{
	printf("%d\n", 0);
	return (0);
}
result += input / 25;
input = input % 25;
result += input / 10;
input = input % 10;
result += input / 5;
input = input % 5;
result += input / 2;
input = input % 2;
result += input;
printf("%d\n", result);
return (0);
}

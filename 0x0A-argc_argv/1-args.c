#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int c = argc - 1;
char **v = argv;
if (v != NULL)
	printf("%d\n", c);
return (0);
}

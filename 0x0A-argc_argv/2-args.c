#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i,  c = argc;
char **v = argv;

if (v != NULL)
	for (i = 0; i < c; i++)
	{
		printf("%s\n", v[i]);
	}
return (0);
}

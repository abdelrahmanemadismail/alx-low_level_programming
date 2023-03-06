#include "main.h"
#include <stdio.h>
/**
 * print_buffer - function that prints a buffer.
 * @b: the buffer.
 * @size: size of the buffer.
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j, s;
	for (i = 0; i< size-10; i+=10)
	{
		printf("%08x ",i);
		for (j = i; j < i + 10; j+=2)
		{
			printf("%02x%02x", b[j], b[j+1]);
			printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (b[j] <= '\31' || b[j] == '\127')
				printf("%c", '.');
			else
				printf("%c", b[j]);
		}
		putchar('\n');
	}

	s = size % 10;
	if (s > 0)
	{
		printf("%08x ",i);
		for (j = i; j < i + s; j+=2)
 		{
 			printf("%02x%02x", b[j], b[j+1]);
			printf(" ");
		}
		for (j = 10 - s + 2; j < 10; j+=2)
		{
			printf("     ");
		} 
		for (j = i; j < i + s; j++)
		{
			if (b[j] <= '\31' || b[j] == '\127')
				printf("%c", '.');
			else
				printf("%c", b[j]);
		}
		putchar('\n');
	}	
}

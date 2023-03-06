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
	int i = 0;

	while(i < size)
	{
		if(i % 10 == 0)
		{
			printf("%08x " ,i);
		}
		if (i % 2 == 0)
			printf("%02x", b[i]);
		else
			printf("%02x ", b[i]);
		
		if (b[i] <= '\31' || b[i] == '\127')
			printf("%c", '.');
		else
			printf("%c", b[i]);
		if((i + 1) % 10 == 0)
			putchar('\n');
		
		i++;
	}
	
}

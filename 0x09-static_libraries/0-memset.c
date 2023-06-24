#include "main.h"
/**
 * _memset -function fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: the pointer to starting with
 * @b: the constant byte
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(t + i) = b;
	}
return (s);
}

#include "main.h"
/**
 * _memcpy -function copies n bytes from memory area src to memory area dest
 * @dest: the pointer to starting point
 * @src: the pointer to the memory area to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(t + i) = src[i];
	}
return (dest);
}

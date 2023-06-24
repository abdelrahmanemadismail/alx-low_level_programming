#include "main.h"
/**
 *  _strncat - is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the pointer to append string at
 * @src: the pointer to string to be appended
 * @n : number of characters to be copyed from src to dest
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *t = dest;
	int c = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && c < n)
	{
		*dest = *src;
		dest++;
		src++;
		c++;
	}
	*dest = '\0';
return (t);
}

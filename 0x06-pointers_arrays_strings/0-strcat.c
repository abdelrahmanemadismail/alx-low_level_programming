#include "main.h"
/**
 *  _strcat - function that appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * @dest: the pointer to append string at
 * @src: the pointer to string to be appended
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *t = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
return (t);
}

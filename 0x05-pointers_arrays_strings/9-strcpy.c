#include "main.h"
/**
 *  _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 * @dest: the pointer to copy string at
 * @src: the pointer to string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *t = src;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
return (t);
}

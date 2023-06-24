#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: substrin to search for
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = s, *a = accept;
	int i, j;

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (t[i] == a[j])
				return (t + i);
		}
	}
return ('\0');
}

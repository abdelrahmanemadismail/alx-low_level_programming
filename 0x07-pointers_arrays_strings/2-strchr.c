#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be searched
 * @c: the character to search for
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *t = s;

	if(*t == '\0')
		return (t);
	while (*t != '\0')
	{
		if (*t == c)
			return (t);
		t++;
	}
return (t);
}

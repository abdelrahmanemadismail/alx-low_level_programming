#include "main.h"
/**
 * string_toupper - function changes all lowercase letters of
 * a string to uppercase.
 * @s: the string to be changed
 * Return: pinter to the changed string
 */
char *string_toupper(char *s)
{
	char *t = s;

	while (*t != '\0')
	{
		if (*t >= 'a' && *t <= 'z')
		{
			*t -= 32;
		}
		t++;
	}
return (s);
}

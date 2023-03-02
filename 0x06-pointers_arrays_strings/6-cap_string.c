#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string to be changed
 * Return: pinter to the changed string
 */
char *cap_string(char *s)
{
	char *t = s;
	int a, b, c, d;

	while (*t != '\0')
	{
		a = t == s || *(t - 1) == ' ' || *(t - 1) == '\t' || *(t - 1) == '\n';
		b = *(t - 1) == ',' || *(t - 1) == ';' || *(t - 1) == '.';
		c = *(t - 1) == '!' || *(t - 1) == '?' || *(t - 1) == '"';
		d = *(t - 1) == '(' || *(t - 1) == ')' || *(t - 1) == '{' || *(t - 1) == '}';
		if (a || b || c || d)
		{
			if (*t >= 'a' && *t <= 'z')
			{
				*t  -= 32;
			}
		}
		t++;
	}
return (s);
}

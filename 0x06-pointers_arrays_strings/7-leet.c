#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: the string to be changed
 * Return: pinter to the changed string
 */
char *leet(char *s)
{
	char *t = s;
	int i = 0;
	char l[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int a, b, c;

	while (*t != '\0')
	{
		for (i = 0; i < 8; i++)
		{
			a = *t - 32 == l[i];
			b = *t == l[i];
			c = *t >= 'A' && *t <= 'z';
			if ((a || b) && c)
			{
				*t = i + '0';
			}
		}
		t++;
	}
return (s);
}

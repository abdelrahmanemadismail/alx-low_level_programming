#include "main.h"
/**
 * rev_string -function that reverses a string.
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int c = 0;
	int i, j;
	char t;

	while (*(s + c) != '\0')
	{
		c++;
	}

	i = 0;
	j = c - 1;
	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}

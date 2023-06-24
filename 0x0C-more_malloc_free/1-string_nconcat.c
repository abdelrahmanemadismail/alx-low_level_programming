#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strlen - function that returns the length of a string.
 * @s: string to calculate it's length
 * Return: the length of string
 */
int _strlen(char *s)
{
	int c = 0;
	char *p = s;

	while (*(p + c) != '\0')
	{
		c++;
	}
return (c);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: The First string
 * @s2: The Second string
 * @n: the number of charaters to be concatenated from the second string
 * Return: pointer shall point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int c1, c2;
	unsigned int i, j;

	if (!s1)
		c1 = 0;
	else
		c1 = _strlen(s1);
	if (!s2)
		c2 = 0;
	else
		c2 = _strlen(s2);
	if (n < c2)
		c2 = n;
	p = malloc((c1 + c2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < c2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}

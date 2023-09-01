#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 * @s: string to calculate it's length
 * Return: the length of string
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
return (c);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, l;
	unsigned int uint;

	if (b == NULL)
		return (0);

	l = _strlen(b) - 1;
	i = l;
	uint = 0;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			uint += (1 << (l - i));
		}
		i--;
	}
	return (uint);
}

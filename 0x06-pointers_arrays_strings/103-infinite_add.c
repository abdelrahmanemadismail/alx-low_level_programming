#include "main.h"
/**
 * infinite_add  - function that adds two numbers.
 * @n1: the first number.
 * @n2: the second number.
 * @r:  is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: the the result If the result can not be stored in r
 * the function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int f, s, res, rm = 0, max_size, i;
	int c1 = 0, c2 = 0;

#include <stdio.h>
	while (n1[c1] != '\0')
		c1++;
	while (n2[c2] != '\0')
		c2++;
	max_size = c1 + 1;
	if (c1 < c2)
		max_size = c2 + 1;
	if (size_r < max_size)
		return (0);
	else if (size_r == max_size)
	{
		res = (*(n1 + (c1 - 1)) - '0') + (*(n2 + (c2 - 1)) - '0');
		if (res > 9)
			return (0);
		else if (res % 10 == 0)
			max_size--;
	}
	for (i = max_size - 1; i >= 0; i--, c1--, c2--)
	{
		f = *(n1 + (c1 - 1)) - '0';
		s = *(n2 + (c2 - 1)) - '0';
		if (c1 <= 0)
			f = 0;
		if (c2 <= 0)
			s = 0;
		res = (f + s + rm) % 10;
		rm = (f + s + rm) / 10;
		r[i] = res + '0';
		if (r[i] == '0' && i == 0)
			r++;
	}
r[max_size] = '\0';
return (r);
}

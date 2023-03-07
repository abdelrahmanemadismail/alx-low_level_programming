#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: substrin to search for
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *t = s, *a = accept;
	unsigned int count = 0;

	while (*a != '\0')
	{
		t = s;
		while (*t != '\0' && *t != ' ')
		{
			if (*t == *a)
			{
				count++;
			}
			t++;
		}
		a++;
	}
return (count);
}

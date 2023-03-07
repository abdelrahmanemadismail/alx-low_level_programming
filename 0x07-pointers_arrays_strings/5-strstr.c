#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: the string to be searched
 * @needle: substrin to search for
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *t = haystack, *a = needle;
	int i, j, k, f, ca = 0, ct = 0;

	while (*a != '\0')
	{
		a++;
		ca++;
	}
	while (*t != '\0')
	{
		t++;
		ct++;
	}
	if (ca > ct)
		return ('\0');
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; t[j] != '\0'; j++)
		{
			if (t[j] == a[i])
			{
				f = 1;
				for (k = 1; a[k] != '\0'; k++)
				{
					if (a[k] != t[j + k])
						f = 0;
				}
				if (f)
					return (t + j);
			}
		}
	}
return ('\0');
}

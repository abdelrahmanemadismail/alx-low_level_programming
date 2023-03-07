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
	int i, j, f, ca = 0, ct = 0;

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
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			f = 1;
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					f = 0;
					break;
				}
			}
		}
	}
return ('\0');
}

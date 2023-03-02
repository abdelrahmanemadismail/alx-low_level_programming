#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: the string to be changed
 * Return: pinter to the changed string
 */
char *rot13(char *s)
{
	char *t = s;
	int i = 0, j = 0;
	char ch[52] = {'A', 'B', 'C', 'D', 'E', 'F'
, 'G', 'H', 'I', 'J', 'K', 'L'
, 'M', 'N', 'O', 'P', 'Q', 'R'
, 'S', 'T', 'U', 'V', 'W', 'X'
, 'Y', 'Z', 'a', 'b', 'c', 'd'
, 'e', 'f', 'g', 'h', 'i', 'j'
, 'k', 'l', 'm', 'n', 'o', 'p'
, 'q', 'r', 's', 't', 'u', 'v'
, 'w', 'x', 'y', 'z'};
	char r[52] = {'N', 'O', 'P', 'Q', 'R', 'S'
, 'T', 'U', 'V', 'W', 'X', 'Y'
, 'Z', 'A', 'B', 'C', 'D', 'E'
, 'F', 'G', 'H', 'I', 'J', 'K'
, 'L', 'M', 'n', 'o', 'p', 'q'
, 'r', 's', 't', 'u', 'v', 'w'
, 'x', 'y', 'z', 'a', 'b', 'c'
, 'd', 'e', 'f', 'g', 'h', 'i'
, 'j', 'k', 'l', 'm'};
	int a, b, c;

	while (s[j] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			a = s[j] == ch[i];
			b = s[j] >= 'A' && *t <= 'Z';
			c = s[j] >= 'a' && *t <= 'z';
			if (a && (b || c))
			{
				s[j] = r[i];
				break;
			}
		}
		j++;
	}
return (s);
}

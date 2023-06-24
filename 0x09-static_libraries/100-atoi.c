#include "main.h"
/**
 *  _atoi - function that convert a string to an integer.
 * @s: string to be integer
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int c = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			c = (c * 10) + (*s - '0');

		else if (c > 0)
			break;

	} while (*s++);

	return (c * sign);
}

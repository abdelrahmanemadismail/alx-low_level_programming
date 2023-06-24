#include "main.h"
/**
 * is_prime - function that find out if a number is prime or not
 * @n : Number to search
 * @i : number to test devide n on
 * Return: 1 if n is prime 0 if not
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}

/**
 * is_prime_number - function that find out if a number is prime or not
 * @n : Number to search
 * Return: 1 if the number prime and 0 if not
 */
int is_prime_number(int n)
{
	int num;

	num = n;
	if (n < 0)
		num = n * -1;
	if (num == 0 || num == 1)
		return (0);
	return (is_prime(num, num / 2));
}

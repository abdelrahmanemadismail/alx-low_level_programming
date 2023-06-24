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
 * print_result - function that Print the result, followed by a new line.
 * @res : the resutl array.
 * @res_len : the length of res array.
 * Return: nothing
 */
void print_result(int *res, int res_len)
{
	int i = 0;

	while (res[i] == 0 && i < res_len - 1)
		i++;
	while (i < res_len)
	{
		_putchar(res[i] + '0');
		i++;
	}
	_putchar('\n');
}

/**
 * mul  - function that multiply two numbers with any number of digit
 * @num1 : the first number.
 * @len1 : the lenght of num1.
 * @num2 : the second number.
 * @len2 : the lenght of num2.
 * Return: multiplycation result
 */
int *mul(char *num1, int len1, char *num2, int len2)
{
	int *result;
	int i, j, k, carry, n1, n2, sum;
	int result_len = len1 + len2;

	result = malloc(result_len * sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < result_len; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		k = len2 + i;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + carry + result[k];
			carry = sum / 10;
			result[k] = sum % 10;
			k--;
		}
		if (carry > 0)
			result[k] += carry;
	}
	return (result);
}
/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int *result;
	int len1, len2, i, c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	for (i = 0; i < len1; i++)
	{
		c = argv[1][i];
		if (c < '0' || c > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < len2; i++)
	{
		c = argv[2][i];
		if (c < '0' || c > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	result = mul(argv[1], len1, argv[2], len2);
	print_result(result, len1 + len2);
	free(result);
	return (0);
}

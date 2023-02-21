#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char *word = "_putchar\n";
int i = 0;
while (word[i])
{
	_putchar(word[i]);
	i++;
}
return (0);
}

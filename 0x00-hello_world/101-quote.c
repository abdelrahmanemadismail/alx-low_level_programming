#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str, sizeof(char), 59, stderr);
return (1);
}

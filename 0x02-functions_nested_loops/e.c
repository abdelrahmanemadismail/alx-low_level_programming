#include <stdio.h>
#define H 1000000000000000000

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int _strlen(char *x)
{
	int c=0;
	int i;	
	for (i = 0; x[i] != '\0'; i++)
	{
		c++;
	}
	return c; 
}

char *add(char *x, char *y, int i)
{
	char *p = x;
	*p = *y + i;
	*p++;
	*p = '\0';
	return x;
}
void next(char *f1, char *f2, char *n, char *num)
{
int l1, l2, q, a, r1, r2 = 0;
l1 = _strlen(f1);
l2 = _strlen(f2);
q = l2 - l1;
for(int i = l2; i>0; i--)
{
if(i - q > 0)
{
a = (int)f2[i] + (int)f1[i - q] + r2;
}
else
{
	a = (int)f2[i] + r2;
}
r1 = a % 10;
add(n, num, r1);
r2 = a / 100;
puts(n);
}
}
int main(void)
{
char num[] = "0123456789";
char f1[] = "7540113804746346429";
char f2[] = "12200160415121876738";
char n[] = "";
next(f1, f2, n, num);
puts(n);
return (0);
}

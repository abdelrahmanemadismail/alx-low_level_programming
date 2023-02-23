#include <stdio.h>
#define H 1000000000000000000

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int b1f1 = 0;
unsigned long int b2f1 = 7540113804746346429;
unsigned long int b1f2 = 125;
unsigned long int b2f2 = 200160415121876738;
unsigned long int b1n = 0;
unsigned long int b2n = 0;
//for(int i =0; i < 7; i++)
//{
//b1n = ((b1f1*H + b2f1)+(b1f2*H + b2f2))/H;
b1n = (b1f2*H + b2f2)/H;
//b2n = ((b1f1*H + b2f1)+(b1f2*H + b2f2))%H;
b2n = (b1f2*H + b2f2)%H;
printf("%lu\n", b1n);
printf("%lu\n", b2n);
printf("%lu%lu\n", b1n, b2n);
b1f1 = b1f2;
b2f1 = b2f2;
b1f2 = b1n;
b2f2 = b2n;
//}
return (0);
}

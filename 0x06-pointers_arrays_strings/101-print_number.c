#include "main.h"
/**
 * print_number - check the code
 * @str: an array of integers
 * Return: nothing.
 */
void print_number(int n)
{
int max = 1000000000;
int zeroAllowed = 0;
int d;
if (n < 0)
{
_putchar('-');
n -= 2 * n;
}
while (max != 0)
{
if (n == 0)
{
_putchar('0');
break;
}
d = n / max;

if (d != 0 )
{
_putchar('0' + d);
zeroAllowed +=1;
}
else
{
if (zeroAllowed)
_putchar('0');
}
n -= d * max; 
max /= 10;
}
}

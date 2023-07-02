#include "main.h"
/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
while (n - 1 >= 0)
{
long d = 10000000000;
int r = 0;
int temp = a[n - 1];
if (temp == 0)
_putchar('0' + temp);
else
{
while (d != 0)
{
int t;
r +=  temp / d;
t = temp / d;
if (r != 0 || t != 0)
_putchar('0' + t);
temp = temp - t *d;
d /= 10;
}
}
if (n != 0)
{
_putchar(',');
_putchar(' ');
}
n--;
}
_putchar('\n');
}

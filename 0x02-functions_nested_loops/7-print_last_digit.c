#include "main.h"
/**
 * print_last_digit - entry point
 * @n : the digit arg
 * Return: last digit value of @n
*/
int print_last_digit(int n)
{
int r;
if (n < 0)
{
r = (-n % 10);
}
else
{
r = (n % 10);
}
_putchar(r + '0');
return (r);
}

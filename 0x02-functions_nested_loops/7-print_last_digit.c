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
r = _putchar((-n % 10) + '0');
}
else
{
r = _putchar((n % 10) + '0');
}
return (r);
}

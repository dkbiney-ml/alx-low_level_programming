#include "main.h"
/**
 * print_last_digit - entry point
 * @n : the digit arg
 * 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
 * Return: last digit value of @n
*/
int print_last_digit(int n)
{
int r;
r = (n % 10);
if (n < 0)
{
r = -r;
}
_putchar('0' + r);
return (r);
}

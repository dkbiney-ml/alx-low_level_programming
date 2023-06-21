#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : is the digit input
 * Return: 1 for positive, -1 for negative and 0 for 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

#include "main.h"
/**
 * times_table - prints the sign of a number
 * Return: 1 for positive, -1 for negative and 0 for 0 (Success)
*/
void times_table(void)
{
int hour;
int minute;
int product;
for (hour = 0; hour < 10; hour++)
{

for (minute = 0; minute < 10; minute++)
{
product = hour * minute;
if (product > 9)
{
_putchar(' ');
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
else
{
if (minute != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar('0' + product % 10);
}
if (minute != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}

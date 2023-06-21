#include "main.h"
/**
 * jack_bauer - prints the sign of a number
 * Return: 1 for positive, -1 for negative and 0 for 0 (Success)
*/
void jack_bauer(void)
{
int hour;
int minute;
for (hour = 0; hour < 24; hour++)
{

for (minute = 0; minute < 60; minute++)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + minute / 10);
_putchar('0' + minute % 10);
_putchar('\n');
}
}
}

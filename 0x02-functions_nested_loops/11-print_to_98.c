#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n : a number
 * Return: the @n
*/
void print_to_98(int n)
{

while (n >= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
return;
}
printf(", ");
n--;
}
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
printf("\n");
return;
}
printf(", ");
n++;
}
}

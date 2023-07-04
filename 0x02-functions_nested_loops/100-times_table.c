#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry
 * @n : int
 * Return: void
 */
void print_times_table(int n)
{
int i;
int s = 3;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
int j = 0;
for (j = 0; j <= n; j++)
{
if (j * i > 9 && j * i < 100)
s = 2;
if (j * i < 10)
s = 3;
if (j * i >= 100)
s = 1;
if (j == 0)
s = 0;
if (j == n)
{
printf("%*s%d\n", s, "", j * i);
break;
}
printf("%*s%d,", s, "", j * i);
}
}
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int ab;
int b;
int cd;
int c;
int d;
for (ab = 0; ab <= 98; ab++)
{
a = ab / 10;
b = ab % 10;
for (cd = ab + 1; cd <= 99; cd++)
{
c = cd / 10;
d = cd % 10;
putchar('0' + a);
putchar('0' + b);
putchar(' ');
putchar('0' + c);
putchar('0' + d);
if (ab != 98)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int c;
int b;
for (ch = 0; ch <= 9; ch++)
{
for (c = ch + 1; c <= 9; c++)
{
for (b = c + 1; b <= 9; b++)
{
putchar('0' + ch);
putchar('0' + c);
putchar('0' + b);
if (ch != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

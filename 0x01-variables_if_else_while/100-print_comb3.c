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
for (ch = 0; ch <= 9; ch++)
{
for (c = ch + 1; c <= 9; c++)
{
putchar('0' + ch);
putchar('0' + c);
if (ch != 8)
{
putchar(',');
putchar(' ');
}
}

}
putchar('\n');
return (0);
}

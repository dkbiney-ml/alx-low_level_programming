#include "main.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n : number of a
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int i = 0;
while (i < n)
{
int j = 0;
while (j < n)
{
if (j == i)
{
_putchar('\\');
break;
}
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}

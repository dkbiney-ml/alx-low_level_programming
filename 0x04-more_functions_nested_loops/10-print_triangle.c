#include "main.h"
/**
 * print_triangle - writes the character c to stdout
 * @size : number of a
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
if (j < size - i - 1)
_putchar(' ');
else
_putchar('#');
j++;
}
if (i != size - 1)
_putchar('\n');
i++;
}
_putchar('\n');
}

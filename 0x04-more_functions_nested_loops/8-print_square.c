#include "main.h"
/**
 * print_square - writes the character c to stdout
 * @size : number of a
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
_putchar('#');
j++;
}
if (i != size - 1)
_putchar('\n');
i++;
}
_putchar('\n');
}

#include "main.h"
/**
 * print_line - writes the character c to stdout
 * @n : the num of _
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}

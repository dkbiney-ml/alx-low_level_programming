#include "main.h"
/**
 * print_most_numbers - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if (i != 2 && i != 4)
_putchar('0' + i);
i++;
}
_putchar('\n');
}

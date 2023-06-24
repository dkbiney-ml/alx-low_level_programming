#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int i = 1;
while (i <= 10)
{
int j = 0;
while (j <= 14)
{
if (j > 9)
_putchar('0' + j / 10);
_putchar('0' + j % 10);
j++;
}
_putchar('\n');
i++;
}
}

#include "main.h"
/**
 * print_rev - entry point
 * @s : input char
 * Return : void
*/
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
while (i >= 1)
{
_putchar(*(s + (i - 1)));
i--;
}
_putchar('\n');
}

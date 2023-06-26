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
while (*(s + i - 1) != '\0')
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}

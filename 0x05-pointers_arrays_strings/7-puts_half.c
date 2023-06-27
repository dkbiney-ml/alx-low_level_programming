#include "main.h"
/**
 * puts_half - entry point
 * @s : input char
 * Return : void
*/
void puts_half(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
i = (i) / 2;
while (*(s + i) != '\0')
{
_putchar(*(s + i));
i++;
}
_putchar('\n');
}

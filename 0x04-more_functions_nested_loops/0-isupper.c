#include "main.h"
/**
 * _isupper - entry point
 * @c: the char input
 *
 * Return:  1 for upper and 0 for not
 */
int _isupper(int c)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
_putchar(c);
return (1);
}
}
return (0);
}

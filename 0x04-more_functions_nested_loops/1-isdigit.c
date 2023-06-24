#include "main.h"
/**
 * _isdigit - entry point
 * @c: the char input
 *
 * Return:  1 for upper and 0 for not
 */
int _isdigit(int c)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}

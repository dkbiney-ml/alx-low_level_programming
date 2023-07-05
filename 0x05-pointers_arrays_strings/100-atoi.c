#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - entry
 * @s : string lit
 * Return:int or others
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int result = 0;
while (*s != '\0')
{
if (*s == '-')
sign = -1;
if (!(*s >= '0' && *s <= '9') && result > 0)
break;
if (*s >= '0' && *s <= '9')
{
result *= 10;
result += *s - '0';
}
s++;
}
return (sign *result);
}

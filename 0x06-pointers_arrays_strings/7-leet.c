#include "main.h"
/**
 * leet - check the code
 * @a: an array of integers
 * Return: nothing.
 */
char *leet(char *str)
{
int capitalizeNext = 1;
while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n' || 
*str == '\r' || *str == '\f' || *str == '\v' || *str == '.' ||
*str == ',' || *str == ';' || *str == '"' || *str == '!' ||
*str == '?' || *str == ')' || *str == ')' || *str == '(' ||
*str == '{' || *str == '}')
{
capitalizeNext = 1;
}
else
{
if (capitalizeNext && ((*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9' )))
{
capitalizeNext = 0;
}
if (capitalizeNext && *str >= 'a' && *str <= 'z')
{
*str = *str - 'a' + 'A';
capitalizeNext = 0;
}
}
str++;
}
return (str);
}

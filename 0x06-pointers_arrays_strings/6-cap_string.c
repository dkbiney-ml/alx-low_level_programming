#include "main.h"
/**
 * cap_string - check the code
 * @str: an array of integers
 * Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1
 * Return: nothing.
 */
char *cap_string(char *str)
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
if (capitalizeNext && ((*str >= 'A' && *str <= 'Z')
|| (*str >= '0' && *str <= '9')))
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

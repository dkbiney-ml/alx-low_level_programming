#include "main.h"
/**
 * rot13 - check the code
 * @str: an array of integers
 * Return: nothing.
 */
char *rot13(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] += ((str[i] >= 'A' && str[i] <= 'M') ||
(str[i] >= 'a' && str[i] <= 'm')) ? 13 : -13;
}
i++;
}
return (str);
}

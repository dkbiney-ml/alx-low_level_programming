#include "main.h"
/**
 * rot13 - check the code
 * @str: an array of integers
 * Return: nothing.
 */
char *rot13(char *str)
{
char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j = 0;
while (str[i] != '\0')
{
j = 0;
while (set[j] != '\0')
{
if (set[j] == str[i])
{
str[i] = rot13[j];
break;
}
j++;
}
i++;
}
return (str);
}

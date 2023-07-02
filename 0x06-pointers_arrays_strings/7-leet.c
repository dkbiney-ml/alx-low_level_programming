#include "main.h"
/**
 * leet - check the code
 * @str: an array of integers
 * Return: nothing.
 */
char *leet(char *str)
{
int i, j = 0;
char set[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3',
'o', '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};
while (str[i] != '\0')
{
j = 0;
while (set[j] != '\0')
{
if (set[j] == str[i])
{
str[i] = set[j + 1];
break;
}
j++;
}
i += 1;
}
return (str);
}

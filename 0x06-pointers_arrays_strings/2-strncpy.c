#include "main.h"
/**
 * _strncpy - entry point
 * @dest : input
 * @src : input
 * @n : input
 * Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int dest_len = 0;
int i;
while (*(dest + dest_len) != '\0')
dest_len++;
for (i = 0;i < n ;i++)
{
if (src[i] == '\0')
break;
dest[i] = src[i];
}
while (i < dest_len)
{
dest[i] = '\0';
i++;
}
return (dest);
}

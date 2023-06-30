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
int i = 0;
while (*(dest + dest_len) != '\0')
{
dest_len++;
}
while (i < dest_len)
{
if (i < n && src[i] != '\0')
{
dest[i] = src[i];
}
if (i >= n)
{
dest[i] = '\0';
}
i++;
}
return (dest);
}

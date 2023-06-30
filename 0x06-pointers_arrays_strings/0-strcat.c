#include "main.h"
/**
 * _strcat - appends the src string to the dest string,
 *  overwriting the terminating null byte (\0) at the end of dest,
 *  and then adds a terminating null byte
 * @dest : input arr
 * @src : input arr
 * Return: ouput char arr
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (i)
{
dest[i] = src[j];
if  (src[j] == '\0')
break;
i++;
j++;
}
return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 *_strcpy - entry point
 * @dest : input char
 * @src  : input char
 * Return: output @dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (i >= 0)
{
dest[i] = *(src + i);
if (dest[i] == '\0')
break;
i++;
}
return (dest);
}

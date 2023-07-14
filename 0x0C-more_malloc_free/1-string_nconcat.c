#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - entry level
 * @s1: char
 * @s2: char
 * @n: uint
 * Return: ptr
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned long int len, temp_l, i = 0;
char *ptr;
char *temp = s1;
char *temp2 = s2;
if (s1 == NULL)
temp = "";
if (s2 == NULL)
temp = "";
temp_l = strlen(temp);
len = strlen(temp) + (n < strlen(temp2) ? n : strlen(temp)) + 1;
ptr = malloc(len *sizeof(char));
if (ptr == NULL)
return (NULL);
while (i < len)
{
if (i < temp_l)
*(ptr + i) = temp[i];
else
*(ptr + i) = temp2[i - temp_l];
i++;
}
ptr[len] = '\0';
return (ptr);
}

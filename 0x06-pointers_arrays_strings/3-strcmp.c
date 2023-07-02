#include "main.h"
#include <stdio.h>
/**
 * _strcmp - entry
 * @s1 : char
 * @s2 : char
 * Return: 0 or other int
*/

int _strcmp(char *s1, char *s2)
{
int i;
int acc = 0;
for (i = 0; s1[i] != '\0'; i++)
{
acc = s1[i] - s2[i];
if (acc != 0)
return (acc);
}
return (acc);
}

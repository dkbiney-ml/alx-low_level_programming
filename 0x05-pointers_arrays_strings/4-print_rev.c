#include "main.h"
/**
 * print_rev - entry point
 * @s : input char
 * Return : void
*/
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
int j = i;
char temp[i];
while (i >= 1)
{
temp[i - 1] = *(s + (i - 1));
i--;
}
while(i = 0)
{
*(s + i) = temp[j - i - 1];
}
}

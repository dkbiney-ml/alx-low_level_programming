#include "main.h"
/**
 * print_rev - entry point
 * @s : input char
 * Return : void
*/
void print_rev(char *s)
{
int i = 0;
int j;
while (*(s + i) != '\0')
{
i++;
}
j = i;
char temp[j];
while (i >= 1)
{
temp[i - 1] = *(s + (i - 1));
i--;
}
while(i == 0)
{
*(s + i) = temp[j - i - 1];
}
}

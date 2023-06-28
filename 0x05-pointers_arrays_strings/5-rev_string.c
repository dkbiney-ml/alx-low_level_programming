#include "main.h"
/**
 * rev_string - entry point
 * @s : input char
 * Return : void
*/
void rev_string(char *s)
{
int i = 0;
int j;
char temp[100];
while (*(s + i) != '\0')
{
i++;
}
j = i - 1;
while (j >= 0)
{
temp[j] = *(s + j);
j--;
}
while (s[j + 1] != '\0')
{
s[j + 1] = *(temp + i - 1);
i--;
j++;
}
}

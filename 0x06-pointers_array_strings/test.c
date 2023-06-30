#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
int i,j = 0;
    printf("%s\n", s1);
    printf("%s", s2);

while(*(s1 + i) != '\0')
{
 i++;
}
while(i)
{
*(s1 + i) = s2[j];
if (s2[j] == '\0')
break;
j++;
}
ptr = s1;
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
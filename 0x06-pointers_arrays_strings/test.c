#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char dest[98] = "Hello ";
    char src[] = "World!\n";
    char *ptr;
    int dest_len = 0;
    int i;
    int n = 1024;
    printf("%s\n", dest);
    printf("%s", src);

    while (*(dest + dest_len) != '\0')
    {
        dest_len++;
    }
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    ptr = dest;
    printf("%s", dest);
    printf("%s", src);
    printf("%s", ptr);
    return (0);
}
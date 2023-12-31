#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int lenN1 = strlen(n1);
int lenN2 = strlen(n2);
int max_len = lenN1 > lenN2 ? lenN1 : lenN2;
if (max_len > size_r)
  return (0);
else
{
while (max_len)
{
r[max_len] = ((n1[lenN1 - 1] ? n1[lenN1 -1] : 0) - 
(n2[lenN2 - 1] ? n2[lenN2 - 1] : 0)) % 10;
r[max_len - 1] = ((n1[lenN1 - 1] ? n1[lenN1 -1] : 0) - 
(n2[lenN2 - 1] ? n2[lenN2 - 1] : 0)) / 10;
max_len--;
lenN1--;
lenN2--;
}
}
return (r);
}

int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;
    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    return (0);
}
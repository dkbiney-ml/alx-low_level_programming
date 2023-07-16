#include <stdio.h>
#include <string.h>
#include "main.h"
  /*infinite_add : entry
   * @n1 : char
   * @n2 : char
   * @r : char
   * size_r : int
   * Return: o or something */
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
return (r);
}
}

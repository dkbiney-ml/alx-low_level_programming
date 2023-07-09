#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry
 *@argc: int
 *@argv: char
 *Return: int
 */
int main(int argc, char **argv)
{
int i = 0, c = 0, s = 0;
int acc[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
c = atoi(argv[1]);
if (c < 0)
{
printf("0\n");
return (0);
}
while (c != 0 && i < 5)
{
if (c - acc[i] < 0)
i++;
else
{
c = c - acc[i];
s++;
}
}
printf("%d\n", s);
return (0);
}

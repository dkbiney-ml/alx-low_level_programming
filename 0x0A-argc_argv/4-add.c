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
int i;
int acc, b = 0;
for (i = 1; i < argc; i++)
{
b = atoi(argv[i]);
if (b == 0)
{
printf("Error\n");
return (1);
}
acc += b;
}
printf("%d\n", acc);
return (0);
}

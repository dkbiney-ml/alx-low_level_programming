#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
double prev1 = 1.0;
double prev2 = 2.0;
double cur = 0.0;
int i = 1;
for (i = 1; i <= 98; i++)
{
if (i == 1 || i == 2)
printf("%d", i);
else
{
cur = prev1 + prev2;
prev1 = prev2;
prev2 = cur;
printf("%.0f", cur);
}
if (i != 98)
printf(", ");
}
printf("\n");
return (0);
}


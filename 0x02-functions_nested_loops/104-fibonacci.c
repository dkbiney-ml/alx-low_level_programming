#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 1;
double prev1 = 1;
double prev2 = 2;
printf("%.0f, %.0f, ", prev1, prev2);
for (i = 3; i <= 98; ++i)
{
double next = prev1 + prev2;
printf("%.0f", next);
if (i != 98)
{
printf(", ");
}
prev1 = prev2;
prev2 = next;
}
printf("\n");
return (0);
}

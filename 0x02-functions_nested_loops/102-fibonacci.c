#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long prev1 = 1;
unsigned long prev2 = 2;
unsigned long cur = 0;
int i;
for (i = 1; i <= 50; i++)
{
if (i == 1 || i == 2)
printf("%d", i);
else
{
cur = prev1 + prev2;
prev1 = prev2;
prev2 = cur;
printf("%lu", cur);
}
if (i != 50)
printf(", ");
}
return (0);
}

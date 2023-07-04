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
unsigned long sum = 0;
int i = 1;
while (cur <= 4000000)
{
if (cur % 2 == 0)
{
sum += cur;
}
if (i == 1 || i == 2)
sum = 2;
else
{
cur = prev1 + prev2;
prev1 = prev2;
prev2 = cur;
}
i++;
}
printf("%lu\n", sum);
return (0);
}

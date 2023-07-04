#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
int acc = 0;
while (i < 1024)
{
if (!(i % 3) || !(i % 5))
acc += i;
i++;
}
printf("%d\n", acc);
return (acc);
}

#include "main.h"
#include <stdio.h>
/**
 * main - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("%s ", fb);
continue;
}
if (i % 5 == 0)
{
printf("%s ", b);
continue;
}
if (i % 3 == 0)
{
printf("%s ", f);
continue;
}
else
{
printf("%d ", i);
}
}
putchar('\n');
return (0);
}

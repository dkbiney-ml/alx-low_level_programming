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
char *f = "Fizz";
char *b = "Buzz";
char *fb = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
int j = 0;
if (i % 15 == 0)
{
while (fb[j] != '\0')
{
putchar(fb[j]);
j++;
}
putchar(' ');
continue;
}
if (i % 5 == 0)
{
while (b[j] != '\0')
{
putchar(b[j]);
j++;
}
putchar(' ');
continue;
}
if (i % 3 == 0)
{
while (f[j] != '\0')
{
putchar(f[j]);
j++;
}
putchar(' ');
continue;
}
else
{
if (i > 9)
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
}
}
return (0);
}

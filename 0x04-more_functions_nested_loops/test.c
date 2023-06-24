#include <stdio.h>
int main(void)
{
int c = 'w';
char i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
putchar(c);
return (1);
}
}
return (0);
}
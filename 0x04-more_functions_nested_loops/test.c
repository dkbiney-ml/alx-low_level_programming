#include <stdio.h>
int main(void)
{
int c = 5;
char i;
for (i = 0; i <= 9; i++)
{
if (c == i)
{
putchar('0' + c);
return (1);
}
}
return (0);
}
#include <stdio.h>
void main(void)
{
int i = 1;
while (i <= 10)
{
int j = 0;
while (j <= 14)
{
if (j > 9)
putchar('0' + j / 10);
putchar('0' + j % 10);
j++;
}
putchar('\n');
i++;
}
}
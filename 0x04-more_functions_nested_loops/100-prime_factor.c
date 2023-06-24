#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long st = 612852475143;
long i;
for (i = 2; i < st; i++)
{
while (st % i == 0)
{
st = st / i;
}
}
printf("%ld\n", st);
return (0);
}

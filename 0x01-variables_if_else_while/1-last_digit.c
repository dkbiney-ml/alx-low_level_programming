#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int d;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
	d = n % 10;
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
if (n % 10 == 0)
	printf("Last digit of %d is 0 and is 0\n", n);
if ((n % 10 < 6) & (n % 10 != 0))
{
	d = n % 10;
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
}
return (0);
}

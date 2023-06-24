#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
if (i > 0)
	printf("%d is positive\n", i);
else
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
return;
}
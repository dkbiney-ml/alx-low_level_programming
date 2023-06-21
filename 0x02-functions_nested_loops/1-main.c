#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
    printf("%d \n",INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
#include "main.h"
#include <stdio.h>
#include "string.h"
int find_sqrt(int h, int n)
{
int square = h * h;
if (square == n)
return (h);
if (square < n)
return (-1);
find_sqrt(h - 1, n);
}

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
find_sqrt(n / 2, n);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
int s = strlen("");
printf("str len of empty str: %d", s);
    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
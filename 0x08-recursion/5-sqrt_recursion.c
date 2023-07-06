#include "main.h"
/**
*_sqrt_recursion_helper -  point of  the function.
*@n: int
*@start: int
*@end: int
*Return: 0
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid, square;
if (start > end)
return (-1);
mid = start + (end - start) / 2;
square = mid *mid;
if (square == n)
return (mid);
else if (square > n)
return (_sqrt_recursion_helper(n, start, mid - 1));
else
return (_sqrt_recursion_helper(n, mid + 1, end));
}
/**
*_sqrt_recursion - entry point of  the function.
*@n: int
*Return: 0
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (_sqrt_recursion_helper(n, 0, n / 2));
}

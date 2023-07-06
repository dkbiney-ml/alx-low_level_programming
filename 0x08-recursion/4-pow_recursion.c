#include "main.h"
/**
*_pow_recursion - entry point of  the function.
*@x: int
*@y: int
*Return: 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
{
return (1);
}
y--;
return (x * _pow_recursion(x, y));
}

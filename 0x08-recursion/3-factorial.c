#include "main.h"
/**
*factorial - entry point of  the function.
*@n : char literal
*Return: 0
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

#include "main.h"
/**
*check_prime -  point of  the function.
*@n: int
*@start: int
*Return: 0
*/
int check_prime(int n, int start)
{
if (start > n / 2)
return (1);
if (n % start == 0)
return (0);
else
return (check_prime(n, start + 2));
}
/**
*is_prime_number - entry point of  the function.
*@n: int
*Return: 0
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
else if (n % 2 == 0 && n != 0)
return (0);
else
return (check_prime(n, 3));
}

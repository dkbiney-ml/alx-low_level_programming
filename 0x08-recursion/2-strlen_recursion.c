#include "main.h"
/**
*_strlen_recursion - entry point of  the function.
*@s : char literal
*Return: 0 or whatever
*/
int _strlen_recursion(char *s)
{
int n = 0;
if (*s == '\0')
{
return (n);
}
n = _strlen_recursion(s + 1);
return (n + 1);
}

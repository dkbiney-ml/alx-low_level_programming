#include "main.h"
/**
*_print_rev_recursion - entry point of  the function.
*@s : char literal
*Returns : 0
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
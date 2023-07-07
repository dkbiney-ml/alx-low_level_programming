#include "main.h"
#include "string.h"
/**
 * check_pal - check
 * @s: char
 * @start: int
 * @end: int
 * Return: 0 or 1
*/
int check_pal(char *s, int start, int end)
{

if (s[start] == s[end])
{
if (start >= end)
return (1);
else
return (check_pal(s, start + 1, end - 1));
}
return (0);
}
/**
 * is_palindrome - is str a drome
 * @s: str literal
 * Return: 0 or 1
*/
int is_palindrome(char *s)
{
int start = 0;
int end = strlen(s) - 1;
if (strlen(s) == 1)
return (1);
return (check_pal(s, start, end));
}

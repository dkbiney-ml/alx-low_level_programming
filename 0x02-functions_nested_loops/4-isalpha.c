#include "main.h"
/**
 * _isalpha - Entry point
 *@c : the arg
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (c == ch)
{
return (1);
}
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
if (c == ch)
{
return (1);
}
}
return (0);
}

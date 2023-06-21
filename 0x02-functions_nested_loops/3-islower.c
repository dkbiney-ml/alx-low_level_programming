#include "main.h"
/**
 * _islower - Entry point
 *@c : the arg
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (c == ch)
{
return (1);
}
}
return (0);
}

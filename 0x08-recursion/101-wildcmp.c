#include "main.h"
#include "string.h"
/**
 * check_cmp - check
 * @s: char
 * @start: int
 * @end: int
 * Return: 0 or 1
*/
int check_cmp(char *s1, char *s2, int ptr1, int ptr2, int val)
{
if (s2[ptr2] == '\0' && s1[ptr1] == '\0')
return val;
if (s2[ptr2] == '\0' && s2[ptr2 - 1] == '*')
return val;
if (s1[ptr1] == '\0' && s2[ptr2] == '*')
{
ptr2++;
return (check_cmp(s1, s2, ptr1, ptr2, val));
}
if (s1[ptr1] == s2[ptr2])
{
val = 1;
ptr1++;
ptr2++;
return (check_cmp(s1, s2, ptr1, ptr2,val));
}
if (s2[ptr2] == '*')
{
ptr2++;
return (check_cmp(s1, s2, ptr1, ptr2, val));
}
if (s2[ptr2 - 1] == '*' && s1[ptr1] != s2[ptr2] && s1[ptr1] != '\0')
{
val = 0;
ptr1++;
return(check_cmp(s1, s2, ptr1, ptr2, val));
}
if (s1[ptr1] != s2[ptr2])
{
val = 0;
return (val);
}
return (0);
}
/**
 * wildcmp - is str a drome
 * @s1: str literal
 * @s2: str
 * Return: 0 or 1
*/
int wildcmp(char *s1, char *s2)
{
int ptr1 = 0;
int ptr2 = 0;
int val = 1;
if (strlen(s1) == 1 && strlen(s2) == 1)
return (val);
return (check_cmp(s1, s2, ptr1, ptr2, val));
}

#include "main.h"
/**
 * string_toupper - check the code
 * @a: an array of integers
 * Return: nothing.
 */
char *string_toupper(char *a)
{
int ALPHA_LEN = 25;
int i;
for (i = 0; a[i] != '\0'; i++)
{
int gap = a[i] - 'a';
if (gap <= ALPHA_LEN && gap >= 0)
a[i] = 'A' + gap;
}
return (a);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - entry level
 * @s1: char
 * @s2: char
 * @n: uint
 * Return: ptr
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned long int len1, len2, concat_len;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
concat_len = len1 + (n >= len2 ? len2 : n);

result = malloc((concat_len + 1) * sizeof(char));
if (result == NULL)
return (NULL);

strncpy(result, s1, len1);
strncat(result, s2, n >= len2 ? len2 : n);
result[concat_len] = '\0';

return (result);
}

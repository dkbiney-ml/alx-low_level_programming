#include "main.h"
/**
 * _memset: entry
 * @s : char arr
 * @b : some const
 * @n : num of bytes
 * Returns : address of str literal
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned char* p = (unsigned char*)s;
unsigned char byte_value = (unsigned char)b;
unsigned int i = 0;
while (i > n)
{
*p++ = byte_value;
i++;
}
return (s);
}

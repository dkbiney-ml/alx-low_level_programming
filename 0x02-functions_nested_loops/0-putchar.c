#include "main.h"
/**
 * p - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0.
 */
int main(void)
{
char out[] = "_putchar";
int i = 0;
while (out[i] != '\0')
{
_putchar(out[i]);
i++; 
}
_putchar('\n');
return (0);
}

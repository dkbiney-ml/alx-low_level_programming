#include "main.h"
/**
 * _strlen - entry point
 * @s : char pointer
 * Return: int
*/
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}

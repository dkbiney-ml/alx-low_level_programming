#include "main.h"
#include <stdlib.h>
/**
 *create_array - entry
 *@size: int
 *@c: char
 *Return: char or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;
	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

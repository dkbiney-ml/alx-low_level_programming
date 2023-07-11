#include "main.h"
#include <stdlib.h>
/**
 *_strdup - entry
 *@str: int
 *Return: char or NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	unsigned int i = 0;

	ptr = malloc(sizeof(str));

	if (ptr == NULL || str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

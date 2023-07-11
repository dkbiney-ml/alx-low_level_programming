#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - entry
 *@str: int
 *Return: char or NULL
 */
char *_strdup(char *str)
{
	char *ptr;

int len;

	unsigned int i = 0;
if (str == NULL)
return (NULL);
len = strlen(str) + 1;

	ptr = malloc(sizeof(char) * len);

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

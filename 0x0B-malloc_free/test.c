#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - entry
 *@str: int
 *Return: char or NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	unsigned int i = 0;
    int len = strlen(str) + 1;

	ptr = malloc(sizeof(char) * len);
    printf("size : %ld\n", sizeof(char) );

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
int main(void)
{
    char *s;

    s = _strdup("First, solve the problem. Then, write the code.");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
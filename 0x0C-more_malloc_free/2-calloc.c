#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - entry
 * @nmemb: int
 * @size: int
 * Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}

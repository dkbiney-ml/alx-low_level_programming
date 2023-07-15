#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - entry
 * @ptr: ptr
 * @old_size: int
 * @new_size: int
 * Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (new_size > old_size)
{
memcpy(p, ptr, old_size);
free(ptr);
return (p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
return (p);
else
{
memcpy(p, ptr, new_size);
free(ptr);
return (p);
}
}

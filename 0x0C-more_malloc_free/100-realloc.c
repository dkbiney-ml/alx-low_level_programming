#include "main.h"
#include <stdlib.h>
#include <string.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (new_size > old_size)
{
strcpy(p, ptr);
free(ptr);
return (p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
return (p);
}

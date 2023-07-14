#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - entry
 * @min: int
 * @max: int
 * Return: ptr
*/
int *array_range(int min, int max)
{
int *p, r, i = 0;
if (min > max)
return (NULL);
r = max - min + 1;
p = malloc(r *sizeof(int));
if (p == NULL)
return (NULL);
while (i < r)
{
p[i] = min + i;
i++;
}
return (p);
}

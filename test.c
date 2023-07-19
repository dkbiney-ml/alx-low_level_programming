#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;
    char j = 9;
    i = 1;
    printf ("sizeof(i) = %lu : %d, sizeof(j) = %lu : %d", sizeof(i), i, sizeof(j), j);
    return (EXIT_SUCCESS);
}
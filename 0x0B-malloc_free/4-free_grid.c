#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - entry
 * @grid: int
 * @height: int
 * Return: ptr
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);  /*// Free each row*/
}
free(grid);  /*// Free the array of row pointers*/
}

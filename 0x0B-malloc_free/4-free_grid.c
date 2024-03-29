#include <stdlib.h>
/**
 * free_grid - free grid from alloc_grid
 * @grid: pointer to 2d arrays
 * @height: array
 * Return: void
 */
void free_grid(int **grid, int height)
{
height--;
while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}

#include "main.h"
/**
 * print_triangle - print triangles with #'s given size
 * @size: size of a triangle to draw
 */
void print_triangle(int size)
{
int draw;
int height;
int width;
if (size <= 0)
_putchar('\n');
for (height = 1; height <= size; height++)
{
for (width = 1; width <= (size - height); width++)
_putchar(' ');
for (draw = 1; draw <= height; draw++)
_putchar('#');
_putchar('\n');
}
}

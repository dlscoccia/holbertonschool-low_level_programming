#include "holberton.h"
#include <stdlib.h>
/*
 * prints a grid
 */ int **alloc_grid(int width, int height)
{
int i = 0;
int **grid;
if (width <= 0)
{
	return ('\0');
}
if (height <= 0)
{
	return ('\0');
}

grid = malloc(sizeof(int *) * width);

for (; i < width; i++)
{
	grid[i] = malloc(sizeof(int) * height);
}

if (grid == '\0')
{
	return ('\0');
}
return (grid);
}

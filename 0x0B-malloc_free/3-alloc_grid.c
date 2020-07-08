#include "holberton.h"
#include <stdlib.h>
/*
* prints a grid
*/ int **alloc_grid(int width, int height)
{
	int i, j = 0;
int **grid;
if (width <= 0 || height <= 0)
{
	return ('\0');
}

grid = malloc(sizeof(int *) * height);
if (grid == '\0')
{
	return ('\0');
}

for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == '\0')
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(grid[i]);
		}
		free(grid);
		return ('\0');
	}
}
for (i = 0; j < width; j++)
	grid[i][j] = 0;
return (grid);
}

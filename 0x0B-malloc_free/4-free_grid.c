#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free memory from a grid
 * @height: of the grid
 * @grid: of the grid
 * Return: void
 **/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that prints a 2 dimensional grid
 * @grid: address of two dimensional grid
 * @height: height of grid
 *
 * Return: Always (0)
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

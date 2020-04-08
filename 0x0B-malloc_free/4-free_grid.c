#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - main function
 * @grid: parameter
 * @height: parameter
 * Return: free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

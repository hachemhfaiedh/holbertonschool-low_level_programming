#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - main function
 * @width: parameter
 * @height: parameter
 * Return: matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(width * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
	}
	return (matrix);
	for (i = 0; i < width; i++)
		free(matrix[i]);
	free(matrix);
}

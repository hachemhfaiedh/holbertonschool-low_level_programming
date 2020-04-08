#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - main function
 * @min: parameter
 * @max: parameter
 * Return: h
 */
int *array_range(int min, int max)
{
	int *h;
	int i;

	if (min > max)
		return (NULL);
	h = malloc(sizeof(int) * ((max - min) + 1));
	if (h == NULL)
		return (NULL);
	for (i = 0; i < ((max - min) + 1); i++)
	{
		h[i] = min + i;
	}
	return (h);
}

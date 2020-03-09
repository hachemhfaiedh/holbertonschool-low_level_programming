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
	h = malloc(sizeof(int) * (max - min + 1));
	if (h == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		h[i] = min;
		min++;
	}
	return (h);
}

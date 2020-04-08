#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - main function
 * @nmemb: parameter
 * @size: parameter
 * Return: c
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	c = malloc(j);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		c[i] = 0;
	}
	return (c);
}

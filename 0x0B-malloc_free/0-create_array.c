#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - main function
 * @size: parameter
 * @c: parameter
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size <= 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}

#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - main function
 * @b: parameter
 * Return: mal
 */
void *malloc_checked(unsigned int b)
{
	char *mal;

	mal = malloc(b);
	if (mal == NULL)
		exit(98);
	return (mal);
}

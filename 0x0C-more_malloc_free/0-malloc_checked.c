#include "holberton.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	char *mal;

	mal = malloc(b);
	if (mal == NULL)
		exit(98);
	return (mal);
}

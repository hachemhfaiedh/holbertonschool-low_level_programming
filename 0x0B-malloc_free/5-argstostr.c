#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - main function
 * @ac: parameter
 * @av: parameter
 * Return: one
 */
char *argstostr(int ac, char **av)
{
	int i, j, f, a = 0;
	char *one;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			f++;
		f++;
	}
	one = malloc(f + 1);
	if (one == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			one[a] = av[i][j];
			a++;
		}
		one[a] = '\n';
		a++;
	}
	one[a] = '\0';
	return (one);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argv: parameter
 * @argc: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, c = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
		c += atoi(argv[i]);
	printf("%d\n", c);
	return (0);
}

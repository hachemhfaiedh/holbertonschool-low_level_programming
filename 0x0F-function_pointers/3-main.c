#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0, j = 0;

	if (argc != 4)
	{
		puts("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		puts("Error");
		exit(100);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(i, j));
	return (0);
}

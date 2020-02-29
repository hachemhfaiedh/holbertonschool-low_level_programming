#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;
	char u[100] = "Error";

	if (argc != 3)
	{
		printf("%s\n", u);
		return (1);
	}
	c = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", c);
	return (0);
}

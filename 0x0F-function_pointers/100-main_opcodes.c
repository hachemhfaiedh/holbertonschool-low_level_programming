#include <stdlib.h>
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	if (argv[1][0] == '-')
	{
		puts("Error");
		exit(2);
	}
	return (0);
}

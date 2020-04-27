#include "holberton.h"
/**
 * _putchar - main func
 * @c: parameter
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

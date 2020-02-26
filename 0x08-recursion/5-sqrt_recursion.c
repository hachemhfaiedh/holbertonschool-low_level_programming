#include "holberton.h"
/**
 * _recursion - first function
 * @i: parameter
 * @n: parameter
 * Return: rec
 */
int _recursion(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i <= n)
		return (_recursion(i + 1, n));
	else
		return (-1);
}
/**
 * _sqrt_recursion - main function
 * @n: parameter
 * Return: rec
 */
int _sqrt_recursion(int n)
{
	return (_recursion(1, n));
}

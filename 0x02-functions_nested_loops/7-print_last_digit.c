#include "holberton.h"
/**
 * print_last_digit - main function
 *@n: parameter
 * Return: n % 10
 */
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}

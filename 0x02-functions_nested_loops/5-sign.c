#include "holberton.h"
/**
 * print_sign - main function
 * @n: integer
 * Return: 1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar(',');
_putchar(' ');
_putchar('\n');
}

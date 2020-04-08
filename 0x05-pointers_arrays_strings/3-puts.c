#include "holberton.h"
/**
 * _puts - main function
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
_putchar (*str);
str++;
}
_putchar ('\n');
}

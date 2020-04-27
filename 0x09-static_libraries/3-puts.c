#include "holberton.h"
/**
 * _puts - main func
 * @s: parameter
 * Return: 0
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');
}

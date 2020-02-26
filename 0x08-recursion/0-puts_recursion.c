#include "holberton.h"
/**
 * _puts_recursion - main function
 * @s: parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar (s[i]);
i++;
}
_putchar ('\n');
return;
}

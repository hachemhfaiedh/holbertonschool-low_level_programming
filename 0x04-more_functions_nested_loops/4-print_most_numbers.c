#include "holberton.h"
/**
 * print_most_numbers - main function
 * @void: parameter
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar (i);
}
_putchar ('\n');
return;
}

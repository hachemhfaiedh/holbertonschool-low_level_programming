#include "holberton.h"
/**
 * puts_half - main function
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
int i = 0, j, k;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (j = i / 2; j <= i - 1; j++)
_putchar (str[j]);
}
if (i % 2 != 0)
{
for (k = ((i - 1) / 2) + 1; k <= i - 1; k++)
_putchar (str[k]);
}
_putchar ('\n');
}

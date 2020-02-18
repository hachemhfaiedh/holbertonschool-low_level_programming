#include "holberton.h"
/**
 * puts - main function
 * @str: parameter
 * Retun: void
 */
void puts2(char *str)
{
int i, j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j += 2)
{
_putchar (str[j]);
}
_putchar ('\n');
}

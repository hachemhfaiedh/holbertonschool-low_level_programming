#include "holberton.h"
/**
 *print_alphabet - main function
 *@void: empty
 *Return: 0
 */
void print_alphabet(void)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
_putchar ('\n');
return;
}

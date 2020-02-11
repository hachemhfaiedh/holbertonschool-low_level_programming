#include "holberton.h"
void print_alphabet_x10(void)
{
int c, x;
x = 0;
while (x < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c++);
}
_putchar(10);
x++;
}
return;
}

#include "holberton.h"
void _puts(char *str)
{
 while(*str) 
{      
_putchar(*str);      
str++;
}
}
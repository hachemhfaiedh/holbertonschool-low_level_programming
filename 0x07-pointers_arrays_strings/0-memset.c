#include "holberton.h"
/**
 * *_memset - main function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while(i < n)
{
s[i] = s[i] + b;
i++;
}
return (s);
}

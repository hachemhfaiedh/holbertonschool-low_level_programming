#include "holberton.h"
/**
 * *_strchr - main function
 * @s: parameter
 * @c: parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}

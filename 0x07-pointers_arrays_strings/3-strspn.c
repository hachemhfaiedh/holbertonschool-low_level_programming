#include "holberton.h"
/**
 * int_strspn - main function
 * @s: parameter
 * @accept: parameter
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, n = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
break;
}
return (n);
}

#include "holberton.h"
/**
 * *_strpbrk - main function
 * @s: parameter
 * @accept: parameter
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
return (&s[i]);
i++;
}
return (0);
}

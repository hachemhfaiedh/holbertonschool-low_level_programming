#include "holberton.h"
/**
 * _strcmp - main function
 * @s1: parameter
 * @s2: parameter
 * Return: r
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, r = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
r = s1[i] - s2[i];
if (s1[i] - s2[i] != 0)
break;
i++;
}
return (r);
}

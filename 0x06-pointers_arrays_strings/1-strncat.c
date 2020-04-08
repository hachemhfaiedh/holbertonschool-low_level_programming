#include "holberton.h"
/**
 * *_strncat - main function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i] != '\0')
i++;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}

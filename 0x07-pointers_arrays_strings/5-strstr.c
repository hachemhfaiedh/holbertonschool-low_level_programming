#include "holberton.h"
/**
 * *_strstr - main function
 * @haystack: parameter
 * @needle: parameter
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *n = haystack;
char *m = needle;
while (*m == *haystack && *m != '\0' && *haystack != '\0')
{
haystack++;
m++;
}
if (*m == '\0')
return (n);
haystack = n + 1;
}
return (0);
}

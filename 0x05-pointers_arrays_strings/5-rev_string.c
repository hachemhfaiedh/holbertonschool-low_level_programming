#include "holberton.h"
/**
 * rev_string - main function
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
int i = 0, j;
char m[509];
while (s[i] != '\0')
{
m[i] = s[i];
i++;
}
i--;
for (j = i; j >= 0; j--)
{
s[i - j] = m[j];
}
}

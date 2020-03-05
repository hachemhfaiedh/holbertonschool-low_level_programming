#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - main function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k, l, m = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(i + n + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
		s[k] = s1[k];
	for (l = i; l < i + n; l++)
	{
		s[l] = s2[m];
		m++;
		if (n == j)
			break;
	}
	s[l] = '\0';
	return (s);
}

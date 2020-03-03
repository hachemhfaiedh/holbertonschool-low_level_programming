#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - main function
 * @str: parameter
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s = malloc(i + 1);
	for (j = 0; j < i + 1; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}

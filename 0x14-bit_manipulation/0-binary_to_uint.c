#include "holberton.h"
/**
 * binary_to_uint - convert binary number to a uint
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, y = 1;
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			x = x + y;
			y = y * 2;
		}
		if (b[i] == '0')
			y = y * 2;
	}
return (x);
}

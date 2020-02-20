#include "holberton.h"
/**
 * reverse_array - main function
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0, j;
int m[509];
while (i < n)
{
m[i] = a[i];
i++;
}
for (j = n - 1; j >= 0; j--)
{
a[(n - 1) - j] = m[j];
}
}

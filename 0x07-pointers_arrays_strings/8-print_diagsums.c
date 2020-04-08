#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - main function
 *@a: parameter
 *@size : parmeter
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
int i, j, k = 0, l = 0;
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
if (i == j)
k += *a;
if ((i + j) == (size - 1))
l += *a;
a += 1;
}
}
printf("%d, %d\n", k, l);
}

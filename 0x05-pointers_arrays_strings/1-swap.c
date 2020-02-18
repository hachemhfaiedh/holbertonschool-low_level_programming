#include "holberton.h"
/**
 * swap_int - main function
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

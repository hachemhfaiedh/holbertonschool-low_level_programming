#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - main function
 * @n: paramerer
 * @separator: parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int a;
	va_list np;

	va_start(np, n);

	while (i < n)
	{
		a = va_arg(np, int);
		printf("%i", a);
	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	i++;
	}
	printf("\n");
	va_end(np);
}

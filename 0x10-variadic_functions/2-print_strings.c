#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - main function
 * @n: paramerer
 * @separator: parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *a;
	va_list np;

	va_start(np, n);

	while (i < n)
	{
		a = va_arg(np, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(np);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - main function
 * @format: parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list np;
	int i = 0, norm;
	char *string;

	va_start(np, format);
	while (format && format[i])
	{
		while (format[i])
		{
			norm = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(np, int));
				break;
			case'i':
				printf("%i", va_arg(np, int));
			break;
			case 'f':
				printf("%f", va_arg(np, double));
				break;
			case 's':
				string = va_arg(np, char *);
			if (string == NULL)
			{
				printf("%p", string);
				break;
			}
			printf("%s", string);
			break;
			default:
				norm = 0;
				break;
			}
		if (norm == 1 && (format[i + 1] != '\0'))
			printf(", ");
		i++;
		}
		va_end(np);
	}
	printf("\n");
}

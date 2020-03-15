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
	char separator[] = ", ";

	va_start(np, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(np, int));
			norm = 1;
			break;
		case'i':
			printf("%i", va_arg(np, int));
			norm = 1;
			break;
		case 'f':
			printf("%f", va_arg(np, double));
			norm = 1;
			break;
		case 's':
			string = va_arg(np, char *);
			if (string == NULL)
			{
				printf("%p", string);
				break;
			}
			printf("%s", string);
			norm = 1;
			break;
		default:
			norm = 0;
		}
		if (norm == 1 && (format[i + 1] != '\0'))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(np);
}

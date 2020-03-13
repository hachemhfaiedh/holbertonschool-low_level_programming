#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - main function
 * @n: paramerer
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, add = 0;
	va_list np;

	if (n == 0)
		return (0);

	va_start(np, n);

	for (i = 0; i < n; i++)
		add += va_arg(np, int);
	va_end(np);
	return(add);
}

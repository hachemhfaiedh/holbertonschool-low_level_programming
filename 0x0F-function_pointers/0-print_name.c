#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - main function
 * @name: parameter
 * @f: parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

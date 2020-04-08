#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array: parameter
 * @size: parameter
 * @action: parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || action == 0)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

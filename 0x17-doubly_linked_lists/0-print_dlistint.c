#include "lists.h"
/**
 * print_dlistint - prints elements of doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

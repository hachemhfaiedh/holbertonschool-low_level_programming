#include "lists.h"
/**
 * dlistint_len - number of elemùents in doublt linked list
 * @h: doubly linked list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}

#include "lists.h"
/**
 * listint_len - number of elements
 * @h: singly linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

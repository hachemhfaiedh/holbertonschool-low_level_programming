#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elemnts in a linked list
 * @h: singly linked list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

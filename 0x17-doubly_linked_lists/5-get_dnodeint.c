#include "lists.h"
/**
 * *get_dnodeint_at_index - returns nth node of a dll
 * @head: parameter
 * @index : parameter
 * Return: head, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}

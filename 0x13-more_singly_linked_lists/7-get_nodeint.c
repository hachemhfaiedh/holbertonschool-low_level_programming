#include "lists.h"
/**
 * *get_nodeint_at_index - returns nth node
 * @head: linked list
 * @index: index of the list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head && a < index)
	{
		head = head->next;
		a++;
	}
	return (head);
}

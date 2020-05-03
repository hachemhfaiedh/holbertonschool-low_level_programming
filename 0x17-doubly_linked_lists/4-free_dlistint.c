#include "lists.h"
/**
 * free_dlistint - free list
 * @head: parameter
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (!head)
		return;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

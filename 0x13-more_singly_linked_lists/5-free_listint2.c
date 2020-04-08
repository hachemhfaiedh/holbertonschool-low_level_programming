#include "lists.h"
/**
 * free_listint2 - free list
 * @head: singly linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
}

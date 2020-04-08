#include "lists.h"
/**
 * free_listint - free linked list
 * @head: singly linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_list;

	while (head)
	{
		temp_list = head;
		head = head->next;
		free(temp_list);
	}
}

#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free linked list
 * @head: singly linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp_list;

	while (head != NULL)
	{
		temp_list = head;
		head = head->next;
		free(temp_list->str);
		free(temp_list);
	}
}

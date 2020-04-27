#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: linked list
 * @index: index of the deleted node
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *temp = *head, *erased;

	if (!temp)
		return (-1);
	if (index != 0)
	{
		erased = temp->next;
		temp->next = erased->next;
		free(erased);
		return (1);
	}
	for (c = 0; c < index - 1; c++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	erased = (*head)->next;
	free(*head);
	*head = erased;
	return (1);
}

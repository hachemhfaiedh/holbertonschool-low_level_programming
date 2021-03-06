#include "lists.h"
/**
 * *insert_nodeint_at_index - insert node at given position
 * @head: linked list
 * @idx: index for the new node
 * @n: new data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b = 0;
	listint_t *new_node;
	listint_t *temp = *head;

	if (idx != 0)
		while (b < idx - 1 && temp)
		{
			temp = temp->next;
			b++;
			if (temp == NULL)
				return (NULL);
		}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

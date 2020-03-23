#include "lists.h"
/**
 * *add_nodeint_end - add node at the end of the list
 * @head: singly linked list
 * @n: elements
 * Return: address of added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp_node;

	temp_node = *head;
	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	if (temp_node == NULL)
		*head = end_node;
	else
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = end_node;
	}
	return (end_node);
}

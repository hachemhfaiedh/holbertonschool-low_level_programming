#include "lists.h"
/**
 * *add_nodeint - add node ad the head of the list
 * @head: singly linked list
 * @n: elements
 * Return: address of the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->next = *head;
	*head = added_node;
	return (added_node);
}

#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head : parameter
 * @n : parameter
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));

	if (!added)
		return (NULL);
	added->prev = NULL;
	added->next = *head;
	added->n = n;

	if (*head)
		(*head)->prev = added;
	(*head) = added;
	return (added);
}

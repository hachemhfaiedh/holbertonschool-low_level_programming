#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: parameter
 * @n: parameter
 * Return: nd
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (!nd)
		return (NULL);
	nd->n = n;
	nd->next = NULL;
	if (*head == NULL)
	{
		nd->prev = NULL;
		*head = nd;
		return (nd);
	}
	while (tmp->next)
		tmp = tmp->next;
	nd->prev = tmp;
	tmp->next = nd;
	return (nd);
}

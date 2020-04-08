#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: linked list
 * Return: address of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	a = temp->n;
	free(temp);
	return (a);
}

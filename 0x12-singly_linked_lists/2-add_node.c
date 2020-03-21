#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - add node at the beginning of the list
 * @head: singly linked list
 * @str: data to be added
 * Return: address of the added node/element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	int i = 0;

	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	added_node->str = strdup(str);
	added_node->len = i;
	added_node->next = *head;
	*head = added_node;
	return (added_node);
}

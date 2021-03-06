#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - add node at the end of the list
 * @head: singly linked list
 * @str: data
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp_node;
	int i = 0;

	temp_node = *head;
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	while (str[i] != '\0')
		i++;
	end_node->len = i;
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

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of the list.
 * @str: string to store of the list.
 *
 * Return: the address of the new element.
 * If it fails, return NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t nochar;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nochar = 0; str[nochar]; nochar++)
		;

	new_node->len = nochar;
	new_node->next = NULL;
	temp = *head;

	if (temp == null)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	
	return (*head);
}

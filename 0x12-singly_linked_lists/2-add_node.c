#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: string to store in the list.
 *
 * Return: returns the address of the head.
 * If fails, return NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t nochar;

	new_node = malloc(sizeof(list_t));
	
	if (new_node = NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nochar = 0; str[nochar]; nochar++)
		;

	new_node->len = nochar;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

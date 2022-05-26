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
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	
	if (new = NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}

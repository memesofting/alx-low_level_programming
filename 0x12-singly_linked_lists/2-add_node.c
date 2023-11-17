#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: singly linked list
 * @str: string to be duplicated
 *
 * Return: sizeof list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	n = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	new->len = n;
	new->next = *head;
	*head = new;
	return (new);
}

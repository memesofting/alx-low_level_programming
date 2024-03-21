#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of list_t
 * @head: singly linked list
 * @str: string to be duplicated
 *
 * Return: sizeof list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;
	size_t n;

	n = 0;
	/*end: node to be aded at the end*/
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	end->len = n;
	end->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end;
	}
	return (end);
}

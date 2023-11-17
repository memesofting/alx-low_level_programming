#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - prints elements of a list
 * @h: singly linked list
 *
 * Return: sizeof list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

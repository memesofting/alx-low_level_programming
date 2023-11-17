#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements of a list
 * @h: first node pointing to next
 *
 * Return: sizeof list
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}

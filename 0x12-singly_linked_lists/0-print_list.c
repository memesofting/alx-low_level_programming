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
	if (h->str == NULL)
	{
		return (1);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	printf("%s", h->str);
	printf("%d", h->len);
	return (0);
}

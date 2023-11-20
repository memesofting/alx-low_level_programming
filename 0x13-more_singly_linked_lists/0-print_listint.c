#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: struct pointer
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	i = 1;
	if (h != NULL)
	{
		printf("%d\n", h->n);
		printf("%d\n", h->next->n);
		i++;
	}
	return (i);
}

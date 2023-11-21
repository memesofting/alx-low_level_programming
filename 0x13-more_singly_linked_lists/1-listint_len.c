#include "lists.h"

/**
 * listint_len - prints number of elements of a list
 * @h: struct pointer
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

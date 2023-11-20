#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 1;
	if (h->next != NULL)
	{
		i++;
		return (i);
	}
	else
	{
		return (i);
	}
}

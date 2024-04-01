#include "lists.h"

/**
 * print_dlistint - prints elements of a list
 * @h: doubly linked list
 * Return: number of nodes on success
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	dlistint_t *temp;

	i = 0;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for(temp == h; temp != NULL; temp = temp->next)
		{
			printf("%d", temp->n);
			i++;
		}
	}
	return (i);
}

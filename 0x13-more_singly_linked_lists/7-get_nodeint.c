#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @index: index of node starting at 0
 * @head: linked list
 *
 * Return: index on success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i;
	
	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	for (i = 1; i < index; i++)
	{
		temp = head->next;
	}
	return (temp);
}

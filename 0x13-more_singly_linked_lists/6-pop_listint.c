#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to list
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t n;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}

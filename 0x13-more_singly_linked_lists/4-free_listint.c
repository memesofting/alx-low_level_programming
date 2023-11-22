#include "lists.h"

/**
 * free_listint - frees a list
 * @head: singly linked list
 *
 * Return: void on success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) && (temp != NULL))
	{
		head = head->next;
		free(temp);
	}
}

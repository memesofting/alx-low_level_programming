#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a list
 * @head: head pointer
 * @n: list element
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (0);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head != NULL)
	{
		temp->next = *head;
	}
	*head = temp;
	return (*head);
}

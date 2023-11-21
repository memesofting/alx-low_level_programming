#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of list
 * @head: pointer to head
 * @n: element of list
 *
 * Return: address of new node on success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
	{
		return (0);
	}
	add->n = n;
	add->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = add;
	}
	return (add);
}

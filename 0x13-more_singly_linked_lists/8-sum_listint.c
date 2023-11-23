#include "lists.h"

/**
 * sum_listint - prints sum of all data(n) of a list
 * @head: linked list
 *
 * Return: sum on success
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

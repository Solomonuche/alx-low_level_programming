#include "lists.h"

/**
 * sum_dlistint -  a function that returns the sum of nth
 * element of a dlistint_t list
 * @head: head node
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		while (temp != 0)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}

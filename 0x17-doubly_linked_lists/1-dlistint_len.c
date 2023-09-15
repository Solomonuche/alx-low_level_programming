#include "lists.h"

/**
 * dlistint_len - a funtion that returns the number of elements of
 * a dlistint_t list
 * @h: head nodes to the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (h == NULL)
		return (0);

	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}

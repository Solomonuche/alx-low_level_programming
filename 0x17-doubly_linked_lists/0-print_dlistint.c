#include "lists.h"

/**
 * print_dlistint - a funtion that prints all elements of
 * a dlistint_t list
 * @h: head nodes to the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (h == NULL)
		return (0);

	while (temp != 0)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all elements of a linked list
 * @h: linked list
 *
 * Return: (number of nodes)
 */

size_t print_listint(const listint_t *h)
{
	const struct listint_s *temp;
	int count = 0;

	temp = h;
	if (h == NULL)
	{
		temp = h;
	}
	else
	{
		while (temp != 0)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			count++;
		}
	}
	return (count);
}

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the numberof elements in a linked list
 * @h: linked list
 *
 * Return: (number of nodes)
 */

size_t listint_len(const listint_t *h)
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
			temp = temp->next;
			count++;
		}
	}
	return (count);
}

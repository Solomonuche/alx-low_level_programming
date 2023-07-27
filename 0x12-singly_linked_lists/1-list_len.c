#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that returns the number of elements of a linked list
 * @h: linked list
 *
 * Return: (len)
 */

size_t list_len(const list_t *h)
{
	const struct list_s *temp;
	unsigned int len = 0;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}

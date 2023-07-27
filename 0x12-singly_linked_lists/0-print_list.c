#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - a function that prints all elements of a linked list
 * @h: linked list
 *
 * Return: (number of nodes)
 */

size_t print_list(const list_t *h)
{
	const struct list_s *temp;
	unsigned int len = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			len++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			len++;
		}
		temp = temp->next;
	}

	return (len);
}

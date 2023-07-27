#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - a function that frees a list
 * @head: linked list
 *
 * Return: (len)
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

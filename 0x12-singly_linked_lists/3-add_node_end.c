#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end -  a function that adds a new node at the end of a list
 * @head: linked list
 * @str: string
 *
 * Return: (&address)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *temp, *newnode;
	const char *dup;

	dup = strdup(str);

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
	{
		free((void *)dup);
		return (NULL);
	}
	newnode->str = (char *)dup;
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}

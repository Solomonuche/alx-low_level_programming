#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  a function that adds a new node at the beginning of a list
 * @head: linked list
 * @str: string
 *
 * Return: (&address)
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *temp;
	const char *dup;

	dup = strdup(str);

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
	{
		free((void *)dup);
		return (NULL);
	}
	temp->str = (char *)dup;
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}

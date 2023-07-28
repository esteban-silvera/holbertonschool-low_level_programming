#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *list2, *last;
	char *str2;
	int x;

	list2 = malloc(sizeof(list_t));
	if (!list2)
	{
		return (NULL);
	}

	str2 = strdup(str);
	if (!str2)
	{
		free(list2);
		return (NULL);
	}

	for (x = 0; str[x];)
	{
		x++;
	}

	list2->str = str2;
	list2->len = x;
	list2->next = *head;

	if (*head == NULL)
	{
		*head = list2;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = list2;
	}

	return (*head);
}

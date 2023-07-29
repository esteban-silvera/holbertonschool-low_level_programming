#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list_2;

	list_2 = malloc(sizeof(dlistint_t));
	if (list_2 == NULL)
		return (NULL);

	list_2->n = n;
	list_2->prev = NULL;
	list_2->next = NULL;

	if (*head == NULL)
	{
		*head = list_2;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = list_2;
	}

	return (*head);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list_2, *last;

	list_2 = malloc(sizeof(dlistint_t));
	if (list_2 == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}

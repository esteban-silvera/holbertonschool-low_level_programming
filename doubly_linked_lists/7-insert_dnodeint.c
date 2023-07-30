#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *list_2;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	list_2 = malloc(sizeof(dlistint_t));

	if (list_2 == NULL)
	{
		return (NULL);
	}

	list_2->n = n;
	list_2->prev = tmp->prev;
	list_2->next = tmp->next;
	if (tmp->prev != NULL)
	{
		tmp->prev->next = list_2;
	}
	tmp->prev = list_2;

	return (list_2);
}

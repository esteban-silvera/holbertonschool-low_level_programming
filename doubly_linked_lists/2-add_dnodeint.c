#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list_2;

	list_2 = malloc(sizeof(dlistint_t));
	if (list_2 == NULL)
		return (NULL);

	list_2->n = n;
	list_2->prev = NULL;
	list_2->next = *head;
	if (*head != NULL)
		(*head)->prev = list_2;
	*head = list_2;

	return (list_2);
}

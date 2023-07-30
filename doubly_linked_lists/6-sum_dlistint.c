#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


int
sum_dlistint(dlistint_t *head)
{
	int x = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (n)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}

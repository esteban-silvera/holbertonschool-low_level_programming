#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


void
free_list(list_t *head)
{
	list_t *list2;

	while (head)
	{
		list2 = head->next;
		free(head->str);
		free(head);
		head = list2;
	}
}

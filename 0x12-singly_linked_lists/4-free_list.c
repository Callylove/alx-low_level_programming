#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - release the memory allocation for a list
 *
 * @head: a pointer to the first node of list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

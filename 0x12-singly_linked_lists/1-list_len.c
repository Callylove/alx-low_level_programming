#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that adds a new node
 * at the begining of a list_t list
 * @h: name of list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

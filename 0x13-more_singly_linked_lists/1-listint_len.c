#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that prints all the elements of a lists
 * @h: the data supplied
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t CountNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		CountNodes++;
	}
	return (CountNodes);
}

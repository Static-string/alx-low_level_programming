#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * size_t print_listint - A function that prints all the elements of a lists
 * @h: the data supplied
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *head;
	int CountNodes = 0;

	while(head->next != NULL)
	{
		CountNodes = CountNodes + 1;
		printf("%d\n", head->n);
	}
	return (CountNodes);
}

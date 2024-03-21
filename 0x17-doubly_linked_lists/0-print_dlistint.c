#include "lists.h"

/**
 * print_dlistint - print all elements of a linked list
 * @h: pointer to the dlistint_t list
 *
 * Return: the numbers of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

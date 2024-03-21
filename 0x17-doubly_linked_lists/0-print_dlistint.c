#include "lists.h"

/**
 * dlistint_len - print all elements of a linked list
 * @h: pointer to the dlistint_t list
 *
 * Return: the numbers of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	while (h)
	{
		printf("%u", h->n);
		h = h->next;
		c++;
	}
	printf("-> %lu elements\n", c);
	return (c);
}

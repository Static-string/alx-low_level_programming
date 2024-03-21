#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: the head of the list
 * @n: Data to be stored in the node
 *
 * Return: Returns the updated list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;

	return (newNode);
}

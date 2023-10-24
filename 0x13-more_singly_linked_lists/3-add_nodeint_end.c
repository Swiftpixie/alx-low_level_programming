#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * description: function that adds a new node at the end of a listint_t
 * @head: pointer
 * @n: int
 *
 * Return: adds a new node at the end of a linked list
 * Otherwise - the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodes, *last;

	nodes = malloc(sizeof(listint_t));
	if (nodes == NULL)
		return (NULL);

	nodes->n = n;
	nodes->next = NULL;

	if (*head == NULL)
		*head = nodes;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = nodes;
	}
	return (*head);
}

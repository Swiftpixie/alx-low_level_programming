#include "lists.h"

/**
 * pop_listint - Entry point
 *
 * description: a function that deletes the head node of a listint_t
 *
 * @head: pointer
 *
 * Return: delete the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *nodes;

	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	nodes = *head;

	*head = nodes->next;

	n = nodes->n;

	free(nodes);

	return (n);
}

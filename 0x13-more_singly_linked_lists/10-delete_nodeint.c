#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 *
 * description:  a function that deletes the node at index of a listint_t
 *
 * @head: pointer
 *
 * @index: index
 *
 * Return: delete the node at index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *current, *nodes;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	nodes = current->next;

	current->next = nodes->next;

	free(nodes);

	return (1);
}

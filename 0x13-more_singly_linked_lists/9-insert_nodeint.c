#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 *
 * description: a function that inserts a new node at a given position
 *
 * @head: pointer
 *
 * @idx: index
 *
 * @n: int
 *
 * Return: inserts a new node at a given position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *current, *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	new->next = current->next;
	current->next = new;

	return (new);
}

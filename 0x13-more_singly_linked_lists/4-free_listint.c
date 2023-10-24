#include "lists.h"

/**
 * free_listint - Entry point
 *
 * description: function that frees a listint_t list.
 *
 * @head: pointer
 *
 * Return: frees a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	listint_t *next;

	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}
}

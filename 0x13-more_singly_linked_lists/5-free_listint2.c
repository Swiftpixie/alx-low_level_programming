#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * description: function that frees a listint_t list.
 *
 * @head: pointer
 *
 * Return: frees a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;

		free(*head);

		*head = next;
	}
}

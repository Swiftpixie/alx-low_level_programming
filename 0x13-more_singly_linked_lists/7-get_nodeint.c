#include "lists.h"

/**
 * get_nodeint_at_index - Entry points
 *
 * description: function that returns the nth node of a listint_t
 *
 * @head: pointer
 *
 * @index: index
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
